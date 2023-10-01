#include <string>

using namespace std;

int main()
{
	char arr[10] = {0,};
	int num, res = 1;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num);
		res *= num;
	}
	string str = to_string(res);
	for (auto a : str) {
		arr[a - '0'] += 1;
	}
	for (auto a : arr) {
		printf("%d\n", a);
	}
	return 0;
}