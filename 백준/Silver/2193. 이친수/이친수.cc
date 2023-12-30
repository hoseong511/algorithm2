#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	int N;
	long long arr[2] = {0, 1};
	cin >> N;
	for (int i = 2; i <= N; i++) {
		long long tmp = arr[0];
		arr[0] = arr[0] + arr[1];
		arr[1] = tmp;
	}
	cout << arr[0] + arr[1];
	return 0;
}