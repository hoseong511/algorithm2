#include <iostream>
#include <vector>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int a, b;
	vector<int> lst;
	while (true) {
		cin >> a >> b;
		if (a + b == 0)
			break ;
		lst.push_back(a+b);
	}
	for (auto x: lst)
		cout << x << '\n';
	return 0;
}
