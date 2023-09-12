#include <iostream>
#include <algorithm>

class Solution {
public:
    bool isPalindrome(string s) {
        std::string tmp;
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