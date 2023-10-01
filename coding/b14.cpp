#include <cstdio>
#include <limits.h>

using namespace std;

int main()
{
	int N, num, low = INT_MAX, high= INT_MIN;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (low > num) low = num;
		if (high < num) high = num;
	}
	printf("%d %d\n", low, high);
	return 0;
}