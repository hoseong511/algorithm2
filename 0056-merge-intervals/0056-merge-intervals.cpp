class Solution {
public:
	typedef vector<vector<int>> vvi;
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
		vvi ans;
		sort(intervals.begin(), intervals.end(), [](vector<int> a, vector<int> b) {
			return a[0] < b[0];
		});
		for (auto x : intervals) {
			if (!ans.empty() && ans.back()[1] >= x[0]) {
				if (ans.back()[1] <= x[1])
					ans.back()[1] = x[1];
			} else {
				ans.push_back(x);
			}
		}
        return ans;
    }
};