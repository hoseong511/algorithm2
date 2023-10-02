#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	int K, n, res = 0;
	vector<int>	stack;
	scanf("%d", &K);
	for (int i = 0; i < K; i++) {
		scanf("%d", &n);
		if (n == 0)
			stack.pop_back();
		else
			stack.push_back(n);
	}
	for (auto x : stack) {
		res += x;
	}
	printf("%d\n", res);
	return 0;
}