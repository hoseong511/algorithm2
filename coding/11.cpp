#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> res;
		int produc = 1;
		for (size_t i = 0; i < nums.size(); i++)
		{
			res.push_back(produc);
			produc *= nums[i];
		}
		produc = 1;
		for (int i = nums.size() - 1; i >= 0; i--)
		{
			res[i] *= produc;
			produc *= nums[i];
		}
		return res;
	}
};

int main()
{
	Solution s;
	vector<int> nums{3,2,4};
	vector<int> res = s.productExceptSelf(nums);
	for (auto a : res) {
		cout << a << '\n';
	}
	return 0;
}