#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N - i; j++)
			cout << ' ';
		for (int j = 1; j < i; j++)
			cout << "* ";
		cout << "*\n";
	}
	return 0;
}
