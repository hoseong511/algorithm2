#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
	int alph[26] = {0,};
	string input;
	int max_idx = -1, max_cnt = -1;
	cin >> input;
	for (auto a : input) {
		alph[tolower(a) - 'a'] += 1;
	}
	for (int i = 0; i < 26; i++) {
		if (max_cnt < alph[i]) {
			max_cnt = alph[i];
			max_idx = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max_cnt == alph[i] && max_idx != i) {
			max_idx = -1;
			break;
		}
	}
	printf("%c\n", max_idx == -1 ? '?' : toupper(max_idx + 'a'));
	return 0;
}
