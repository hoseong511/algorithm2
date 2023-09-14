class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<vector<int>> res;
		for (int i = 0; i < static_cast<int>(nums.size()) - 1; i++) {
			for (int j = i + 1; j < static_cast<int>(nums.size()); j++) {
				if (nums[i] + nums[j] == target)
					return vector<int>{i, j};
			}
		}
		return vector<int>{};
	}
};