#include<string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<int> stack;
    for (char x: s) {
        if (!stack.empty()) {
            if (stack.back() == '(' && x == ')') {
                stack.pop_back();
                continue ;
            }
        }
        stack.push_back(x);
    }
    answer = stack.empty();
    return answer;
}