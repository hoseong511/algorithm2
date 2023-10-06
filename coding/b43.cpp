// 잃어버린 괄호
#include <iostream>
#include <vector>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void preproc(vector<string>& lst, string& input)
{
	int pos = 0;

	for (int i = 0; i < input.length(); i++) {
		if (!isdigit(input[i])) {
			lst.push_back(string(input, pos, i - pos));
			lst.push_back(string(input, i, 1));
			pos = i + 1;
		}
	}
	if (pos != input.length()) {
		lst.push_back(string(input, pos, input.length() - pos));
	}
}

void

int main()
{
	FAST;
	string input, num;
	vector<string> lst;

	cin >> input;
	preproc(lst, input);

	for (auto x : lst) {
		cout << x << '\n';
	}
	return 0;
}