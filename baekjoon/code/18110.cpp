#include <unistd.h>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

void read_(char *buf, int size)
{
	int byte;
	bzero(buf, size);
	byte = read(0, buf, size - 1);
	buf[byte - 1] = 0;
}

int main()
{
	int cnt;
	char buf[11];

	read_(buf, sizeof(buf));
	cnt = atoi(buf);
	if (cnt == 0)
	{
		printf("%d", 0);
		return 0;
	}
	std::vector<int> lst(cnt);
	for (int i = 0; i < cnt; i++)
	{
		read_(buf, sizeof(buf));
		lst[i] = atoi(buf);
	}
	int cut = round(cnt * 0.15);
	std::sort(lst.begin(), lst.end());
	double avg = 0;
	for (int i = cut; i < cnt - cut; i++)
		avg += lst[i];
	avg = round(avg / (cnt - cut * 2));
	printf("%d", static_cast<int>(avg));
	return 0;
}
