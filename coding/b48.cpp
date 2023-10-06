//피보나치 함수
#include <iostream>
#include <vector>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int T, input;
	vector<pair<int, int>> arr(41, {0, 0});

	arr[0] = {1, 0};
	arr[1] = {0, 1};
	for (int i = 2; i < 41; i++) {
		arr[i].first = arr[i - 1].first + arr[i - 2].first;
		arr[i].second = arr[i - 1].second + arr[i - 2].second;
	}
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> input;
		cout << arr[input].first << ' ' << arr[input].second << '\n';
	}
	
	return 0;
}