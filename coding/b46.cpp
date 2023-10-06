//부녀회장이 될테야
#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, floor, ho;
	int arr[15 * 15] = {0, };
	arr[1] = 1;
	for (int i = 2; i < 15 * 15; i++) {
		floor = i / 15;
		ho = i % 15;
		if (ho == 0)
			continue ;
		if (floor == 0)
			arr[i] = i;
		else
			arr[i] = arr[i - 1] + arr[(floor - 1) * 15 + ho];
	}
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> floor;
		cin >> ho;
		cout << arr[floor * 15 + ho] << '\n';
	}
	return 0;
}