#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, T;
	string input;
	unordered_map<string,int> mp;
	vector<string> vc;

	cin >> N >> T;
	for (int i = 0; i < N + T; i++) {
		cin >> input;
		mp[input] += 1;
		if (mp[input] > 1)
			vc.push_back(input);
	}
	sort(vc.begin(), vc.end());
	cout << vc.size() << '\n';
	for (auto x : vc) {
		cout << x << '\n';
	}
	return 0;
}