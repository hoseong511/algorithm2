#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	int tar, res = 0, idx;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &tar);
		if (res < tar) {
			res = tar;
			idx = i + 1;
		}
	}
	cout << res << '\n' << idx << '\n';
	return 0;
}