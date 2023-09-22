class Solution {
public:
	string removeDuplicateLetters(string s) {
		string res;
		for (auto a : s)
			mp[a] += 1;
		for (auto a : s) {
			if (find(res.begin(), res.end(), a) != res.end()) {
				mp[a]--;
				continue ;
			}
			while (res.size() > 0 && (res.back() > a && mp[res.back()] > 1)) {
				mp[res.back()]--;
				res.pop_back();
			}
			res.push_back(a);
		}
		return res;
	}
private:
	map<char, int> mp;
};