#include <iostream>
#include <algorithm>
#include <cmath>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

#define MAX 10000001
int main()
{
	FAST;
	int N;
	cin >> N;
	while (N != 1) {
		int i;
		for (i = 2; i < N + 1; i++) {
			if (N % i == 0) {
				cout << i << '\n';
				break ;
			}
		}
		N /= i;
	}
	return 0;
}