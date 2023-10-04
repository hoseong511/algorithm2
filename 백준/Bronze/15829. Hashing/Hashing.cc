#include <cstdio>
#include <cmath>

int main()
{
	int L, res = 0;
	char ch;
	scanf("%d\n", &L);
	for (int i = 0; i < L; i++) {
		scanf("%c", &ch);
		char a = ch - 'a' + 1;
		res += a * pow(31, i);
	}
	printf("%d\n", res % 1234567891);
	return 0;
}