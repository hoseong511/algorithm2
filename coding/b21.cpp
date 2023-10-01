#include <string>
#include <string.h>

using namespace std;

int main()
{
	char spac[2] = {0, 0};
	char input[101] = {0, };

	scanf("%s", input);
	string str(input);
	for (int i = 0; i < 26; i++) {
		printf("%s%d", spac, (int)str.find(i + 'a'));
		spac[0] = ' ';
	}
	printf("\n");
	return 0;
}
