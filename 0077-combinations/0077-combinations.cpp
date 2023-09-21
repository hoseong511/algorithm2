class Solution {
public:
	void dfs(int n, int k, int start, vector<int>& tar) {
		if (k == 0) {
			res.push_back(tar);
			return ;
		}
		for (int i = start; i < n + 1; i++) {
			tar.push_back(i);
			dfs(n, k - 1, i + 1, tar);
			tar.pop_back();
		}
	}
	vector<vector<int>> combine(int n, int k) {
		vector<int> tar;
		dfs(n, k, 1, tar);
		return res;
	}
private:
	vector<vector<int>> res;
};
