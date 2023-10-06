#include <iostream>
#include <vector>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N;
	vector<int> lst;
	cin >> N;
	int num = 666;
	while (lst.size() != 10000) {
		if (to_string(num).find("666") != string::npos)
			lst.push_back(num);
		num++;
	}
	cout << lst[N - 1];
	return 0;
}