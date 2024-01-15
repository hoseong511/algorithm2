#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 2000001
vector<int> tree;
void update(int node, int s, int e, int tar, int val)
{
	if (tar < s || tar > e)
		return ;
	if (s == e) {
		tree[node] += val;
		return ;
	}
	int mid = (s + e) / 2;
	update(node * 2, s, mid, tar, val);
	update(node * 2 + 1, mid + 1, e, tar, val);
	tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int query(int node, int s, int e, int tar)
{
	if (s == e)
		return s;
	int mid = (s + e) / 2;
	if (tar <= tree[2 * node])
		return query(2 * node, s, mid, tar);
	else 
		return query(2 * node + 1, mid + 1, e, tar - tree[2 * node]);
}

int main()
{
	FAST;
	int N;
	cin >> N;
	int h = (int)ceil(log2(MAX));
	int tree_size = (1 << (h + 1));
	tree.assign(tree_size, 0);
	for (int i = 0; i < N; i++) {
		int T, X;
		cin >> T >> X;
		if (T == 1) {
			update(1, 1, MAX, X, 1);
		} else if (T == 2) {
			int tar = query(1, 1, MAX, X);
			cout << tar << '\n';
			update(1, 1, MAX, tar, -1);
		}
	}
	return 0;
}