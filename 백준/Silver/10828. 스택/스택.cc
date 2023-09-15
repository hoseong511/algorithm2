#include <iostream>
#include <sstream>
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
		int num;
		scanf("%s %d\n", buf, &num);
		cmd = buf;
		if (cmd == "push") {
			stack.push_back(num);
		} else if (cmd == "top") {
			if (stack.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << stack.back() << endl;
		} else if (cmd == "size") {
			cout << stack.size() << endl;
		} else if (cmd == "pop")  {
			if (stack.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << stack.back() << endl;
			stack.pop_back();
		} else if (cmd == "empty") {
			cout << stack.empty() << endl;
		}
	}
	
}