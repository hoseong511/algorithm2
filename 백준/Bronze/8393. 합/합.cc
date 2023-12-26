#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int arr[10001];
	arr[1] = 1;
	arr[2] = 3;
	for (int i = 3; i < N + 1; i++) {
		arr[i] = arr[i - 1] + i;
	}
	cout << arr[N];
	return 0;
}
