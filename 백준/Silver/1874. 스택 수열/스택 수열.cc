#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	scanf("%d\n", &N);
	vector<int> lst;
	vector<char> res;
	int cnt = 1;
	for (int i = 0; i < N; i++)
	{
		int num;
		scanf("%d", &num);
		while (cnt <= num) {
			lst.push_back(cnt);
			res.push_back('+');
			cnt++;
		}
		if (lst.back() == num) {
			lst.pop_back();
			res.push_back('-');
		}
	}
	if (lst.size() == 0)
		for (auto x: res) cout << x << '\n';
	else
		cout << "NO" << '\n';
	return 0;
}