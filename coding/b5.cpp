#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	int N;
	char buf[1024 * 10];
	vector<string> lst;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		string str, target;
		stringstream stream;
		scanf("%[^\n]s", buf);
		if (!buf[0])
			scanf("%[^\0]s", buf);
		str = buf;
		bzero(buf, sizeof(buf));
		stream.str(str);
		while (stream >> target) {
			lst.push_back(target);
			target.clear();
		}
		for (size_t i = 0; i < lst.size(); i++)
			reverse(lst[i].begin(), lst[i].end());
		char spac[2] = {0, 0};
		for (auto a: lst) {
			cout << spac << a;
			spac[0] = ' ';
		}
		cout << '\n';
		lst.clear();
	}
}