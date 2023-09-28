#include <cstdio>
#include <string>

using namespace std;

int main()
{
	int N;
	int h, w, num;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int tmp1, tmp2;
		scanf("%d %d %d", &h, &w, &num);
		tmp1 = num % h == 0 ? h : num % h;
		tmp2 = num % h == 0 ? num / h : num /h + 1;
		printf("%d\n", tmp1 * 100 + tmp2);
	}
	return 0;
}