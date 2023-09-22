#include <iostream>
#include <vector>
#include <map>

using namespace std;
/* 
	[ 
		[{'a' : 1}, {'b' : 1}],
	 	[{'s' : 1}, {'d' : 1}], 
		...
	]
 */
// 

class Solution {
public:
	typedef vector<vector<string>>::iterator vv_it;
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

int main()
{
	Solution s;
	vector<string> test{"eat","tea","tan","ate","nat","bat"};
	vector<vector<string>> res = s.groupAnagrams(test);

	for (Solution::vv_it it = res.begin(); it != res.end(); it++)
	{
		for (vector<string>::iterator i = (*it).begin(); i != (*it).end(); i++)
		{
			cout << *i << endl;
		}
	}
	
}
