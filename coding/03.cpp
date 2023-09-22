#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

template<typename T>
std::ostream& operator<<(std::ostream& s, const std::vector<T>& vec)
{
	s.put('[');
	char c[3] = {0, ' ', 0};
	for (size_t i = 0; i < vec.size(); i++)
	{
		s << c << vec[i];
		c[0] = ',';
	}
	return s << "]\n";
}


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
			v_let.push_back({string(str, 0, n), string(str, n + 1, str.length() - n - 1)});
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
		cout << let << endl;
		return let;
	}
private:
	vector<pair<string,string>> v_let;
	vector<string> dig;
};

/* 
	1. digN, letN 따로 데이터 관리
		- dig, let 까지 판단 .strnstr
	2. letN 정렬
		- 문자 정렬
		- if 문자 동일? 식별자 순 정렬
	3. letN + digN
 */

int main()
{
	Solution s;
	vector<string> vec{"27 85717 7", "2 y xyr fc", "52 314 99", "d 046099 0", "m azv x f", "7e apw c y", "8 hyyq z p", "6 3272401", "c otdk cl", "8 ksif m u"};
	s.reorderLogFiles(vec);
}


//["7e apw c y","m azv x f","8 hyyq z p","c otdk cl","2 y xyr fc","27 85717 7","52 314 99","d 046099 0","6 3272401"]

//["7e apw c y","m azv x f","8 hyyq z p","8 ksif m u","c otdk cl","2 y xyr fc","27 85717 7","52 314 99","d 046099 0","6 3272401"]