#include <iostream>
#include <vector>
#include <map>
#include <regex>
#include <algorithm>

using namespace std;

class Solution {
public:
	void ins_data(const string& para, string::size_type pos, int idx)
	{
		string word = string(para, idx, pos - idx);
		if (data.find(word) == data.end())
			data.insert({word, 1});
		else
			data[word] += 1;
	}

	static int trans(int c)
	{
		if (!isalpha(c))
			return ' ';
		else
			return tolower(c);
	}

	string mostCommonWord(string paragraph, vector<string>& banned) {
		transform(paragraph.begin(), paragraph.end(), paragraph.begin(), trans);
		string::size_type pos = paragraph.find(' ');
		int idx = 0;
		while (pos != string::npos) {
			ins_data(paragraph, pos, idx);
			idx = pos + 1;
			pos = paragraph.find(' ', idx);
		}
		ins_data(paragraph, paragraph.size(), idx);
		for (size_t i = 0; i < banned.size(); i++)
		{
			if (data.find(banned[i]) != data.end())
				data[banned[i]] = 0;
		}
		if (data.find("") != data.end())
			data[""] = 0;
		typedef map<string,int>::value_type pair_type;
		auto pr = max_element(data.begin(), data.end(), [](pair_type& a, pair_type& b){
			return a.second < b.second;
		});
		for (map<string,int>::iterator it = data.begin(); it != data.end(); it++)
		{
			cout << (*it).first << " " << (*it).second << endl;
		}
		
		if (pr->second == 0)
			return "";
		return pr->first;
	}
private:
	map<string,int> data;
};

int main()
{
	//{
	//	vector<string> banned{"hit"};

	//	string res = s.mostCommonWord(
	//			"Bob hit a ball, the hit BALL flew far after it was hit.",
	//			banned);
	//	cout << res << endl;
	//}
	{
		Solution s;
		vector<string> banned{"bob", "hit"};

		string res2 = s.mostCommonWord(
				"Bob. hIt, baLl",
				banned);
		cout << "2 " << res2 << endl;
	}
	{
		Solution s;
		vector<string> banned{"bob", "hit"};

		string res2 = s.mostCommonWord(
				"",
				banned);
		cout << "2 " << res2 << endl;
	}
	return 0;
}