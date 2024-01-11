#include <cstdio>
#include <string.h>

bool arr[1001] = {0, };
void prime()
{
	memset(arr + 2, true, sizeof(arr) - 2);
	for (int i = 2; i <= 1000; i++) {
		if (arr[i] == false)
			continue ;
		for (int j = i * i; j <= 1000; j += i) {
			arr[j] = false;
		}
	}
}

int main()
{
	int N, num, cnt = 0;
	scanf("%d", &N);
	prime();
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (arr[num])
			cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}
