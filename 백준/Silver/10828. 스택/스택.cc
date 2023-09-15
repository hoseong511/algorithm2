#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	char buf[100];
	vector<int> stack;
	scanf("%d\n", &N);
	for (int i = 0; i < N; i++)
	{
		string cmd;
		int num = 0;
		scanf("%s %d\n", buf, &num);
		cmd = buf;
		if (cmd == "push") {
			stack.push_back(num);
		} else if (cmd == "top") {
			if (stack.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << stack.back() << '\n';
		} else if (cmd == "size") {
			cout << stack.size() << '\n';
		} else if (cmd == "pop")  {
			if (stack.size() == 0) {
				cout << -1 << '\n';
				continue;
			}
			cout << stack.back() << '\n';
			stack.pop_back();
		} else if (cmd == "empty") {
			cout << stack.empty() << '\n';
		}
	}
}