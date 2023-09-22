#include <iostream>
#include <cstdio>
#include <cstring>
#include <unistd.h>

int main()
{
	int lst[26] = {0};
	char input[1000001];
	int byte = read(0, input, 1000000);
	if (byte)
		input[byte - 1] = 0;
	else
		return 1;
	int len = strlen(input);
	for (int i = 0; i < len; i++)
	{
		lst[std::toupper(input[i]) - 'A']++;
	}
	int max_cnt = 0;
	int max_alpha = 0;
	for (int i = 0; i < 26; i++)
	{
		if (lst[i] > max_cnt)
		{
			max_cnt = lst[i];
			max_alpha = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (max_alpha != i && lst[max_alpha] == lst[i])
		{
            printf("?");
			return 0;
		}
	}
	printf("%c", max_alpha + 'A');
	return 0;
}
