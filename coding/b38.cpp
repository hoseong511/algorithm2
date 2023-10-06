#include <iostream>
#include <set>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

struct Compare{
	bool operator() (string a, string b) const {
		if (a.length() == b.length())
			return a < b;
		else
			return a.length() < b.length();
	}
};

int main()
{
	FAST;
	int N;
	set<string, Compare> data;
	string input;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		data.insert(input);
	}
	for (auto x : data)
		cout << x << '\n';
	return 0;
}