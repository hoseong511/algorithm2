#include <string>
#include <string.h>
using namespace std;

int main()
{
	int N, score = 0, sum = 0;
	char str[81];
	scanf("%d", &N);
	for (int i = 0; i< N; i++) {
		memset(str, 0 , sizeof(str));
		scanf("%s", str);
		for (auto a : str) {
			if (a == 'O') {
				if (score) score++;
				else score = 1;
			} else {
				score = 0;
			}
			sum += score;
		}
		printf("%d\n", sum);
		sum = 0;
	}
	return 0;
}