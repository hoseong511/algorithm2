#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	int arr[1001] = {0, };
	cin >> N;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= N; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
	}
	cout << arr[N]; 
	return 0;
}