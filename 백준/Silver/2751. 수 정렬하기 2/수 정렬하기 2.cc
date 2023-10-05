#include <iostream>
#include <set>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

struct Compare{
	bool operator() (int a, int b) const {
		return a < b;
	}
};

int main()
{
	FAST;
	int N;
	set<int, Compare> data;
	int input;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		data.insert(input);
	}
	for (auto x : data)
		cout << x << '\n';
	return 0;
}