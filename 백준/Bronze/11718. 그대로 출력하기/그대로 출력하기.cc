#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	string input;
	while (true) {
		getline(cin, input);
		if (cin.eof())
			break ;
		cout << input << '\n';
	}
	return 0;
}
