class Solution {
public:
	typedef vector<vector<string>>::iterator vv_it;

	void load_data(string word)
	{
		string tmp(word);

		sort(tmp.begin(), tmp.end(), [](char& a, char& b){
			return a < b;
		});
		if (dic.find(tmp) != dic.end()) {
			dic[tmp].push_back(word);
			return ;
		}
		dic.insert({tmp, {word}});
	}

	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		for (size_t i = 0; i < strs.size(); i++)
		{
			load_data(strs[i]);
		}
		map<string, vector<string>>::iterator it;
		for (it = dic.begin(); it != dic.end(); it++) {
			data.push_back((*it).second);
		}
		return data;
	}
private:
	vector<vector<string>> data;
	map<string,vector<string>> dic;
};