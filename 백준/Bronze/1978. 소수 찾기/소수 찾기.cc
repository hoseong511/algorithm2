#include <cstdio>
#include <cmath>

int isprime(int n)
{
	if (n == 1)
		return 0;
	for (int i = 2; (double)i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;	
}

int main()
{
	int N, num, cnt = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (isprime(num))
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
