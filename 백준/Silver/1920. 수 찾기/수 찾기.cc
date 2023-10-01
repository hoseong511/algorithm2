#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int N, num;
	scanf("%d", &N);
	map<int,bool> mp;
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		mp[num] = true;
	}
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		if (mp[num])
			printf("%d\n", 1);
		else
			printf("%d\n", 0);
	}
	return 0;
}