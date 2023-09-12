class Solution {
public:
	bool strnstr(const string& str1, const string& str2, int n)
	{
		for (int i = 0; i < n; i++) {
			if (str1[i] != str2[i])
				return false;
		}
		return true;
	};

	void set_data(string& str)
	{
		string::size_type n = str.find(' ');
		string second(str, n + 1, str.length() -n - 1);
		if (isdigit(second[0]))
			dig.push_back(str);
		else
			v_let.push_back({string(str, 0, n), second});
	}

	static bool cmp(pair<string,string>& a, pair<string,string>& b)
	{
		if (a.second == b.second)
			return a.first < b.first;
		return a.second < b.second;
	}

	vector<string> sort_let()
	{
		vector<pair<string,string>> vec;
		vector<string> res;
		
		sort(v_let.begin(), v_let.end(), cmp);
		vector<pair<string,string>>::iterator it;
		for (it = v_let.begin(); it != v_let.end(); it++)
		{
			res.push_back((*it).first + " " + (*it).second);
		}
		return res;
	}

	vector<string> reorderLogFiles(vector<string>& logs) {
		vector<string> let;
		vector<string>::iterator it;
		for (it = logs.begin(); it < logs.end(); it++) {
			set_data(*it);
		}
		logs.clear();
		let = sort_let();
		for (size_t i = 0; i < dig.size(); i++)
		{
			let.push_back(dig[i]);
		}
		return let;
	}
private:
	vector<pair<string,string>> v_let;
	vector<string> dig;
};