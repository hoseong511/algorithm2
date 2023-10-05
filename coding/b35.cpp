#include <cstdio>
#define MODOPRD 1234567891

typedef unsigned long long ull;

int main()
{
	int L;
	char ch;
	ull res = 0;
	ull r = 1;

	scanf("%d\n", &L);
	for (int i = 0; i < L; i++) {
		scanf("%c", &ch);
		char a = ch - 'a' + 1;
		res += a * r;
		r *= 31;
		if (r >= MODOPRD)
			r %= MODOPRD;
	}
	printf("%llu\n", res % MODOPRD);
	return 0;
}
