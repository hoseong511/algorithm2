#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		string res;
		map<char,char> mp;
		mp['('] = ')';
		mp['{'] = '}';
		mp['['] = ']';
		for (auto x : s) {
			if (res.size() > 0) {
				if (mp[res.back()] == x) {
						res.pop_back();
						continue;
					}
			}
			res.push_back(x);
		}
		if (res.size() > 0)
			return false;
		return true;
	}
};

int main (void)
{
	Solution s;
	cout << s.isValid("((((())))))") << '\n';
	return 0;
}