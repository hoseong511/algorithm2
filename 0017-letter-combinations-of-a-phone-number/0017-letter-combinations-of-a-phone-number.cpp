class Solution {
public:
	void combination(string digits, size_t depth, string& res) {
		if (depth > digits.length() - 1) {
			vec.push_back(res);
			return;
		}
		string tar = mp[digits[depth]];
		for (size_t i = 0; i < tar.length(); i++)
		{
			res.push_back(tar[i]);
			combination(digits, depth + 1, res);
			res.pop_back();
		}
	}
	vector<string> letterCombinations(string digits) {
		mp['2'] = "abc";
		mp['3'] = "def";
		mp['4'] = "ghi";
		mp['5'] = "jkl";
		mp['6'] = "mno";
		mp['7'] = "pqrs";
		mp['8'] = "tuv";
		mp['9'] = "wxyz";
		string res;
		combination(digits, 0, res);
		return vec;
	}
private:
	map<char, string> mp;
	vector<string>	vec;
};