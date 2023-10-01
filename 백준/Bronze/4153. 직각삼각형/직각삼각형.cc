#include <cstdio>

int check(int a, int b, int c)
{
	return (a * a + b * b == c * c);
}

int main()
{
	int a,b,c;
	while (1) {
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if (a + b + c == 0)
			break; 
		if (check(a, b, c))
			printf("right\n");
		else if (check(a, c, b))
			printf("right\n");
		else if (check(b, c, a))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return 0;
}