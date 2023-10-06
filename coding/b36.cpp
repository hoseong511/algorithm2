#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	string input;
	size_t len;
	bool is_yes;
	
	while (1) {
		cin >> input;
		if (input == "0") break;
		len = input.length();
		is_yes = true;
		for (size_t i = 0, j = len - 1; i < len / 2 ; i++, j--) {
			if (input[i] != input[j]) {
				is_yes = false;
				break ;
			}
		}
		cout << (is_yes ? "yes" : "no") << '\n';
	}
	return 0;
}