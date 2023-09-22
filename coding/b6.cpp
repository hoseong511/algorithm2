#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		vector<char> lst;
		string str;
		char buf[100];
		scanf("%s", buf);
		str = buf;
		for (size_t i = 0; i < str.size(); i++)
		{
			if (lst.size() > 0) {
				if (lst.back() == '(' && str[i] == ')') {
					lst.pop_back();
					continue ;
				}
			}
			lst.push_back(str[i]);
		}
		
		if (lst.size() == 0)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}