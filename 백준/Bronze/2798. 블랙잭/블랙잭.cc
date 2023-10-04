#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sum;

void dfs(vector<int> lst, vector<int> tar, int depth)
{
	if (depth == 3) {
		int tmp = 0;
		for (auto x : tar)
			tmp += x;
		sum.push_back(tmp);
		return ;
	}
	for (size_t i = 0; i < lst.size(); i++) {
		vector<int> tmp(lst.begin() + i + 1, lst.end());
		tar.push_back(lst[i]);
		dfs(tmp, tar, depth + 1);
		tar.pop_back();
	}
}

int main()
{
	int N, M, num;
	vector<int> lst;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		lst.push_back(num);
	}
	vector<int> tar;
	dfs(lst, tar, 0);
	sort(sum.begin(), sum.end());
	int start = 0, end = sum.size();
	int mid = end / 2;
	while (1) {
		if (sum[mid] == M || start == mid || end == mid)
			break;
		if (M < sum[mid])
			end = mid;
		else
			start = mid;
		mid = (start + end) / 2;
	}
	printf("%d\n", sum[mid]);
	return 0;
}
