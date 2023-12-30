#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	int N;
	long long arr[91][2] = {{0,}, {0, 1}, };
	cin >> N;
	for (int i = 2; i <= N; i++) {
		arr[i][0] = arr[i-1][1] + arr[i-1][0];
		arr[i][1] = arr[i-1][0];
	}
	cout << arr[N][0] + arr[N][1];
	return 0;
}