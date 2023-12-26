#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int pos = 0;
	string input;
	cin >> input;
	int len =input.size();
	while (pos != len) {
		if (len - pos > 10) {
			cout << string(input, pos, 10) << '\n';
			pos += 10;
		} else {
			cout << string(input, pos, len - pos);
			pos += len - pos;
		}
	}
	return 0;
}
