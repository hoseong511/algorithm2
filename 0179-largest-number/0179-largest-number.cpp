class Solution {
public:
    string largestNumber(vector<int>& lst) {
		string ans;
		int i = 1;
		while (i < lst.size()) {
			int j = i;
			while (j > 0) {
				string s1 = to_string(lst[j]);
				string s2 = to_string(lst[j-1]);
				if (stoull(s1 + s2) > stoull(s2 + s1))
					swap(lst[j], lst[j - 1]);
				j--;
			}
			i++;
		}
		for (auto x : lst) {
			if (ans == "0")
				break;
			ans += to_string(x);
		}
		return ans;
	}
};