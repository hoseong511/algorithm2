#include <iostream>
#include <vector>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N;
	vector<int> data;
	int input;

	cin >> N;
	data.assign(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> data[i];
	}
	sort(data.begin(), data.end());
	for (auto x : data)
		cout << x << '\n';
	return 0;
}