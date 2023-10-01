#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
	char alph[26] = {-1,};
	char spac[2] = {0, 0};
	char input[101] = {0, };
	memset(alph, -1, sizeof(alph));
	scanf("%s", input);
	for (int i = 0; input[i] != 0; i++) {
		if (alph[input[i] - 'a'] == -1)
			alph[input[i] - 'a'] = i;
	}
	for (auto a : alph) {
		printf("%s%d", spac, a);
		spac[0] = ' ';
	}
	printf("\n");
	return 0;
}
