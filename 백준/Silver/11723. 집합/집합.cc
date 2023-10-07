#include <iostream>
#include <string.h>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int M, n;
	string cmd;
	char S[21] = {0, };

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> cmd;
		if (cmd == "all" || cmd == "empty") {
			if (cmd == "all")
				memset(S + 1, 1, sizeof(S) - 1);
			else
				memset(S, 0, sizeof(S));
		} else {
			cin >> n;
			if (cmd == "add") {
				S[n] = 1;
			} else if (cmd == "remove") {
				if (S[n]) S[n] = 0;
			} else if (cmd == "check") {
				cout << (S[n] ? 1 : 0) << '\n';
			} else if (cmd == "toggle") {
				if (S[n]) S[n] = 0;
				else S[n] = 1;
			}
		}
	}
	return 0;
}