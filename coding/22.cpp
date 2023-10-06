#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& f_list) {
		vector<int> res(f_list.size(), 0);
		vector<int> stack;
		for (size_t i = 0; i < f_list.size(); i++) {
			while (!stack.empty() && f_list[stack.back()] < f_list[i]) {
				int top = stack.back();
				res[top] = i - top;
				stack.pop_back();
			}
			stack.push_back(i);
		}
		return res;
	}
};

int main (void)
{
	Solution s;
	vector<int> f_list{73,74,75,71,69,72,76,73};
	s.dailyTemperatures(f_list);
	return 0;
}