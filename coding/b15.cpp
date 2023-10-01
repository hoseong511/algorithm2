#include <cstdio>
#include <sstream>

using namespace std;

int main()
{
	char input[1024 * 1024];
	string tar;
	int cnt = 0;
	scanf("%[^\n\r]", input);
	stringstream ss(input);
	while (ss >> tar) {
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}