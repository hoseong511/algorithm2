#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int T;
	vector<int> stack;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		char input[6] = {0,};
		int n = 0;
		scanf("%s", input);
		string cmd(input);
		if (cmd == "push") {
			scanf("%d", &n);
			stack.push_back(n);
		} else if (cmd == "pop") {
			if (stack.empty()) {
				printf("%d\n", -1);
				continue ;
			}
			printf("%d\n", stack.back());
			stack.pop_back();
		} else if (cmd == "size") {
			printf("%lu\n", stack.size());
		} else if (cmd == "empty") {
			printf("%d\n", stack.empty());
		} else if (cmd == "top") {
			if (stack.empty()) {
				printf("%d\n", -1);
				continue ;
			}
			printf("%d\n", stack.back());
		}
	}
	return 0;
}