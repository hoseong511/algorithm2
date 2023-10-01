#include <cstdio>
#include <string>

using namespace std;
int main()
{
	int n;
	int sum, res = 0;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		sum = 0;
		string s = to_string(i);
		for (auto a : s) {
			sum += a - '0';
		}
		sum += i;
		if (n == sum) {
			res = i;
			break ;
		}
	}
	printf("%d\n", res);
	return 0;
}