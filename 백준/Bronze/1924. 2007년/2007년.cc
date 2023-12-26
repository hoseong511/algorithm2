#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
	FAST;
	int M, D;
	int res = 0;
	string week[7] = {"SUN" , "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	cin >> M >> D;
	for (int i = 1; M != 1 && i < M; i++) {
		if (i < 8) {
			if (i % 2 == 1)
				res += 31; // day 31
			else if (i == 2)
				res += 28; // day 28
			else
				res += 30; // day 30
		} else {
			if (i % 2 == 0)
				res += 31; // day 31
			else
				res += 30; // day 30
		}
	}
	cout << week[(res + D) % 7];
	return 0;
}
