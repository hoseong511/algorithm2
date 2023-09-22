#include <iostream>
#include <vector>

using namespace std;

template<typename T>
ostream& operator<< (ostream& out, vector<T>& tar)
{
	out << '[';
	char spac[3] = {0, ' ', 0};
	for (auto x: tar) {
		out << spac << x;
		spac[0]	= ',';
	}
	return out << ']';
}

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

int main (void)
{
	Solution s;
	vector<int> node{1, 2, 3};
	vector<vector<int>> res = s.combine(3, 3);
	for (auto x : res) {
		cout << x << '\n';
	}
	return 0;
}