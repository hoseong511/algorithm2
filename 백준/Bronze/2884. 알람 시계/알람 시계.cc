#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int H, M;
	scanf("%d %d", &H, &M);
	M = M - 45;
	if (M < 0) {
		M = M + 60;
		H = H - 1;
		if (H < 0)
			H = H + 24;
	}
	cout << H << ' ' << M << '\n';
	return 0;
}