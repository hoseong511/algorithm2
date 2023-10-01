#include <cstdio>
#include <vector>

using namespace std;

int main()
{
	int T;
	scanf("%d", &T);
	for (int i = 0; i< T; i++) {
		char input[51] = {0,};
		vector<char> stack;
		scanf("%s", input);
		for (int i = 0; input[i]; i++) {
			if (!stack.empty()) {
				if (stack.back() == '(' && input[i] == ')') {
					stack.pop_back();
					continue ;
				}
			}
			stack.push_back(input[i]);
		}
		printf("%s\n", stack.empty() ? "YES" : "NO");
	}
	return 0;
}