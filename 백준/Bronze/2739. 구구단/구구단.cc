#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 1; i < 10; i++) {
		cout << N << " * " << i << " = " << N * i << '\n';
	}
	return 0;
}
