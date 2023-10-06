//설탕배달
#include <iostream>
#include <limits.h>
#include <string.h>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, a, b;
	int arr[5001];
	memset(arr, -1, 5001);
	arr[3] = 1;
	arr[5] = 1;
	cin >> N;
	for (int i = 6; i < 5001; i++) {
		if (arr[i - 5] != -1 || arr[i - 3] != -1) {
			a = arr[i - 5] != -1 ? arr[i - 5] : INT_MAX;
			b = arr[i - 3] != -1 ? arr[i - 3] : INT_MAX;
			arr[i] = (a > b ? b : a) + 1;
		}
	}
	cout << arr[N];
	return 0;
}