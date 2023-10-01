#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int N, res = 0;
	char str[101];
	scanf("%d", &N);
	scanf("%s", str);
	for (int i = 0; i < N; i++) {
		res += str[i] -'0';
	}
	cout << res << '\n';
	return 0;
}