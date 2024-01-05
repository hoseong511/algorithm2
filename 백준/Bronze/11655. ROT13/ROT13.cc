#include <iostream>
#include <cctype>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	string input;
	char c;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++) {
		if (isupper(input[i])) {
			c = input[i] - 'A';
			c += 13;
			c %= 26;
			input[i] = c + 'A';
		} else if (islower(input[i])) {
			c = input[i] - 'a';
			c += 13;
			c %= 26;
			input[i] = c + 'a';
		}
	}
	cout << input;
	return 0;
}
