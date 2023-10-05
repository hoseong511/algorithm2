#include <iostream>
#include <algorithm>
#include <limits.h>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, a, b;
	int arr[5001] = {-1, -1, -1, };
	arr[3] = 1;
	arr[4] = -1;
	arr[5] = 1;
	cin >> N;
	for (int i = 6; i < 5001; i++) {
		if (arr[i - 5] != -1 || arr[i - 3] != -1) {
			a = arr[i - 5] != -1 ? arr[i - 5] : INT_MAX;
			b = arr[i - 3] != -1 ? arr[i - 3] : INT_MAX;
			arr[i] = min(a, b) + 1;
		} else {
			arr[i] = -1;
		}
	}
	cout << arr[N];
	return 0;
}