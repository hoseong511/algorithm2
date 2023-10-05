#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, input;
	int arr[11] = {0, };
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		cout << arr[input] << '\n';
	}
	return 0;
}