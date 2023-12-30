#include <iostream>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
#define MOD 10007
using namespace std;
int main()
{
	int N;
	int arr[10] = {0, };
	fill(arr, arr + 10, 1);
	cin >> N;
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < 10; j++) {
			arr[j] += arr[j-1];
			arr[j] %= 10007;
		}
	}
	int res = 0;
	for (int i = 0; i < 10; i++) {
		res += arr[i];
		res %= MOD;
	}
	cout << res;
	return 0;
}