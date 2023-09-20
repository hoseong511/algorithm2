class Solution {
public:
	bool isValid(string s) {
		vector<char> res;
		for (auto x : s) {
			if (res.size() > 0) {
				if ((res.back() == '(' && x == ')') ||
					(res.back() == '[' && x == ']') ||
					(res.back() == '{' && x == '}')) {
						res.pop_back();
						continue;
					}
					
			}
			res.push_back(x);
		}
		if (res.size() > 0)
			return false;
		return true;
	}
};