class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		for (auto x: strs) {
			string tmp = x;
			sort(tmp.begin(), tmp.end());
			dic[tmp].push_back(x);
		}
		for (auto x: dic) {
			data.push_back(x.second);
		}
		return data;
	}
private:
	vector<vector<string>> data;
	map<string,vector<string>> dic;
};