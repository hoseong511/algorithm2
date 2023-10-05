#include <cstdio>
#include <vector>
#include <limits.h>

using namespace std;

int main()
{
	int N, M, num;
	int max_num = INT_MIN;
	scanf("%d %d", &N, &M);
	vector<int> lst(N, 0);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		lst[i] = num;
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int tmp = lst[i] + lst[j] + lst[k];
				if (max_num < tmp && tmp <= M)
					max_num = tmp;
			}
		}
	}
	printf("%d\n", max_num);
	return 0;
}
