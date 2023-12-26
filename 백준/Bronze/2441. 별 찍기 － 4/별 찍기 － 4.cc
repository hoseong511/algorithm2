#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = N; j > 0 ; j--)
			cout << (i + j - N - 1 < 0 ? '*' : ' ');
		cout << '\n';
	}
	return 0;
}
