#include <iostream>
#include <vector>
#include <map>

using namespace std;

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

template<typename T>
ostream& operator<< (ostream& out, vector<T>& tar)
{
	char spac[3] = {0, ' ', 0};
	for (auto x: tar) {
		out << spac << x;
		spac[0]	= ',';
	}
	return out;
}

int main (void)
{
	Solution s;
	vector<int> node{1, 2, 3};
	vector<vector<int>> res = s.permute(node);
	for (auto x : res) {
		cout << x << '\n';
	}
	return 0;
}