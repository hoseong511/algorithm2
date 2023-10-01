#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template<typename T>
ostream& operator<< (ostream& out, vector<T> lst)
{
	char comm[3] = {0, ' ', 0};
	for (auto a : lst) {
		out << comm << a;
		comm[0] = ',';
	}
	return out;
}
// 브루트포스
int solution(vector<int> cards) {
	int answer = 0;
	vector<int> lst;
	for (int a : cards) {
	int res = 1;
		vector<int> tmp = cards;
	size_t trial = 0;
	size_t i = a - 1;
	while (trial != 2) {
		if (tmp[i] == 0) {
			i++;
			if (i > tmp.size() - 1)
				i = 0;
			continue ;
		}
		int cnt = 0;
		int j = 0;
		while (tmp[i] != 0) {
			j = i;
			i = tmp[i] - 1;
			tmp[j] = 0;
			cnt++;
		}
		if (cnt)
			res *= cnt;
		trial++;
		i++;
		if (i > tmp.size() - 1)
			i = 0;
	}
		lst.push_back(res);
	}
	answer = *max_element(lst.begin(), lst.end());
	return answer;
}

int main()
{
	vector<int> cards{8,6,3,7,2,5,1,4};
	solution(cards);
	return 0;
}