#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	int memo = 1;
	int N;
	scanf("%d", &N);
	for (int i = 1, j = 1; i < N; i += j * 6, j++)
		memo++;
	printf("%d\n", memo);
	return 0;
}