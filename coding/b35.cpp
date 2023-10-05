#include <cstdio>
#define MODNUM 1234567891



int main()
{
	int L;
	unsigned long long res = 0;
	char ch;
	scanf("%d\n", &L);
	for (int i = 0; i < L; i++) {
		scanf("%c", &ch);
		char a = ch - 'a' + 1;
		unsigned long long tmp = 1;
		int j = 0;
		while (j < i) {
			tmp *= 31;
			if (tmp >= MODNUM)
				tmp %= MODNUM;
			j++;
		}
		res += a * tmp;
	}
	printf("%llu\n", res % MODNUM);
	return 0;
}
