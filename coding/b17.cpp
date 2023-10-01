#include <string>

using namespace std;

int main()
{
	int T, R;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		char str[21] = {0,};
		scanf("%d %s", &R, str);
		for (auto x: str) {
			printf("%s", string(R, x).c_str());
		}
		printf("\n");
	}
	return 0;
}