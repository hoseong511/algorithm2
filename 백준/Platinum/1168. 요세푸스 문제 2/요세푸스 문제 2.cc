#include <iostream>
#include <algorithm>
#include <cmath>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<int> tree;

void build(int node, int start, int end)
{
	if (start == end) {
		tree[node] = 1;
		return ;
	}
	int mid = (start + end) / 2;
	build(node * 2, start, mid);
	build(node * 2 + 1, mid + 1, end);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

void update(int node, int start, int end, int tar)
{
	tree[node]--;
	if (start == end) return;
	int mid = (start + end) / 2;
	if (tar <= mid)
		update(node * 2, start, mid, tar);
	else
		update(node * 2 + 1, mid + 1, end, tar);
}

int query(int node, int start, int end, int idx)
{
	if (start == end) return start;
	int mid = (start + end) / 2;
	if (idx <= tree[2 * node])
		return query(2 * node, start, mid, idx);
	else
		return query(2 * node + 1, mid + 1, end, idx - tree[2 * node]);
}

int main()
{
	FAST;
	int N, K;
	char comm[3] = {0, ' ', 0};
	cin >> N >> K;
	int H = (int)ceil(log2(N));
	tree.resize(1 << (H + 1));
	build(1, 0, N - 1);
	int idx = 1;
	cout << '<';
	for (int i = 0; i < N; i++) {
		int size = N - i;
		idx += K - 1;
		idx %= size;
		if (idx == 0) idx = size;
		int num = query(1, 1, N, idx);
		update(1, 1, N, num);
		cout << comm << num;
		comm[0] = ',';
	}
	cout << '>';
	return 0;
}
