#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
	FAST;
	int M, D;
	int res = 0;
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
	switch ((res + D) % 7)
	{
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break ;
	case 2:
		cout << "TUE";
		break ;
	case 3:
		cout << "WED";
		break ;
	case 4:
		cout << "THU";
		break ;
	case 5:
		cout << "FRI";
		break ;
	case 6:
		cout << "SAT";
		break ;
	}
	return 0;
}
