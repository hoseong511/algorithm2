class Solution {
public:
	void dfs(vector<int>& nums, size_t depth, vector<int>& tar, size_t size) {
		if (depth == size) {
			res.push_back(tar);
			return ;
		}
		for (size_t i = 0; i < nums.size(); i++) {
			vector<int> tmp = nums;
			tar.push_back(nums[i]);
			tmp.erase(tmp.begin() + i);
			dfs(tmp, depth + 1, tar, size);
			tar.pop_back();
		}
	}
	vector<vector<int>> permute(vector<int>& nums) {
		vector<int> tar;
		dfs(nums, 0, tar, nums.size());
		return res;
	}
private:
	vector<vector<int>> res;
};