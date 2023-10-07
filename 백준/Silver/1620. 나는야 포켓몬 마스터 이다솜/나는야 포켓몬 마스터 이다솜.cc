#include <iostream>
#include <map>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, T;
	string input;
	map<string,string> mp1;
	map<string,string> mp2;

	cin >> N >> T;
	for (int i = 1; i < N + 1; i++) {
		cin >> input;
		string idx = to_string(i);
		mp1[input] = idx;
		mp2[idx] = input;
	}
	for (int i = 0; i < T; i++) {
		cin >> input;
		if (!mp1[input].empty()) cout << mp1[input] << '\n';
		if (!mp2[input].empty()) cout << mp2[input] << '\n' ;
	}
	return 0;
}