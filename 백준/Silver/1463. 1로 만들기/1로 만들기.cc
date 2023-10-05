#include <iostream>
#include <limits.h>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, a, b, c;
	int arr[1000 * 1000 + 1] = {0, };
	arr[2] = 1;
	arr[3] = 1;
	cin >> N;
	for (int i = 4; i < 1000 * 1000 + 1; i++) {
		if (i % 2 == 0 || i % 3 == 0 || arr[i - 1] != 0) {
			a = i % 2 == 0 ? arr[i / 2] : INT_MAX;
			b = i % 3 == 0 ? arr[i / 3] : INT_MAX;
			c = arr[i - 1];
			a = a > b ? b : a;
			arr[i] = (a > c ? c : a) + 1;
		}
	}
	cout << arr[N];
	return 0;
}