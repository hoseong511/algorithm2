#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N, input;
	int max = -1000001, min = 1000001;
	cin >> N;
	for (int i =0; i < N; i++) {
		cin >> input;
		if (max < input)
			max = input;
		if (min > input)
			min = input;
	}
	cout << min << ' ' << max;
	return 0;
}
