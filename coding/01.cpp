#include <iostream>
#include <algorithm>
#include <cctype>
class Solution {
public:
    bool isPalindrome(std::string s) {
        std::string tmp, rev;
	std::string::iterator it;
	for (it = s.begin(); it != s.end(); it++) {
		if (isalnum(*it))
			tmp.push_back(tolower(*it));
	}
	std::string::reverse_iterator rit;
	it = tmp.begin();
	for (rit = tmp.rbegin(); rit != tmp.rend(); rit++) {
		if (*rit == *it) {
			it++;
			continue ;
		}
		return false;
	}
	return true;
    }
};

int main()
{
	Solution s;
	bool s1 = s.isPalindrome("A man, a plan, a canal: Panama");
	std::cout << s1 << std::endl;
	return 0;
}