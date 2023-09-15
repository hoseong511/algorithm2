#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	vector<string> lst;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		string str, target;
		stringstream stream;
		cin.tie(0);
		cout.tie(0);
		ios_base::sync_with_stdio(false);
		getline(cin, str);
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