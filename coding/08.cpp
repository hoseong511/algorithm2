#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> stack;
	int res = 0;
	for (size_t i = 0; i < height.size(); i++) {
		while (stack.size() > 0 && height[i] > height[stack.back()]) {
			int top = stack.back();
			stack.pop_back();
			if (stack.size() == 0)
				break ;
			int distance = i - stack.back() - 1;
			int waters = min(height[i], height[stack.back()]) - height[top];
			res += distance * waters;
		}
		stack.push_back(i);
	}
	return res;
    }
};

int main()
{
	Solution s;
	vector<int> height{4,2,0,3,2,5};
	int res = s.trap(height);
	cout << res << endl;
	return 0;
}