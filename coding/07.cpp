#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<vector<int>> res;
		for (int i = 0; i < static_cast<int>(nums.size()) - 1; i++) {
			int j = target - nums[i];
			auto it = find(nums.begin() + i + 1, nums.end(), j);
			if (it != nums.end())
				return vector<int>{i, static_cast<int>(it - nums.begin())};
		}
		return vector<int>{};
	}
};

int main()
{
	Solution s;
	vector<int> nums{3,2,4}, res;
	res = s.twoSum(nums, 6);
	cout << res[0] << " " << res[1] << endl;
	return 0;
}