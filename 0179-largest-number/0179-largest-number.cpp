class Solution {
public:
    string largestNumber(vector<int>& nums) {
		string ans;
        sort(nums.begin(), nums.end(), [](long long a, long long b) {
			string s1 = to_string(a);
			string s2 = to_string(b);
			return stoull(s1 + s2) > stoull(s2 + s1);
		});
		for (auto x : nums) {
            if (ans == "0")
                    break;
			ans += to_string(x);
		}
		return ans;
    }
};