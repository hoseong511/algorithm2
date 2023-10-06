#include <cstdio>

using namespace std;

int main()
{
	int N;
	int input;

	scanf("%d", &N);
	int arr[10001] = {0, };
	for (int i = 1; i <= N; i++) {
		scanf("%d", &input);
		arr[input]++;
	}
	for (int i = 1; i < 10001; i++) {
		while (arr[i] != 0) {
			printf("%d\n", i);
			--arr[i];
		}
	}
	return 0;
}