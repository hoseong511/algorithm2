// 팩토리얼 0의 개수
#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, cnt= 0, tmp;
	int arr[501] = {0,};
	cin >> N;
	tmp = N;
	do {
		if (tmp % 5 == 0)
			cnt++;
	} while (tmp /= 5);
	tmp = N;
	do {
		if (tmp % 25 == 0)
			cnt++;
	} while (tmp /= 25);
	tmp = N;
	do {
		if (tmp % 125 == 0)
			cnt++;
	} while (tmp /= 125);
	cout << arr[N]
	return 0;
}