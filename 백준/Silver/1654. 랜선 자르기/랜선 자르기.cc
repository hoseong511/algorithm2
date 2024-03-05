#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	int N, K;
	cin >> K >> N;
	vector<int> lst;
	lst.assign(K, 0);
	for (int i = 0; i < K; i++)
		cin >> lst[i];
	sort(lst.begin(), lst.end());

	long long start = 1;
	long long end = lst[K - 1];
	long long result = 0;
	while (start <= end) {
		long long mid = (start + end) / 2;
		int cnt = 0;
		for (auto x: lst) {
			cnt += x / mid;
		}
		if (cnt < N) {
			end = mid - 1;
		} else {
			start = mid + 1;
			result = mid;
		}
	}
	cout << result;
	return 0;
}