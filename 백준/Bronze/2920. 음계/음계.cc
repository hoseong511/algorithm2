#include <string>

using namespace std;

int main()
{
	char S[16] = {0,};
	scanf("%[^\n\r]", S);
	string str(S);
	if ("1 2 3 4 5 6 7 8" == str) printf("ascending\n");
	else if ("8 7 6 5 4 3 2 1" == str) printf("descending\n");
	else printf("mixed\n");
	return 0;
}