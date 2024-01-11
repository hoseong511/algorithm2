#include <iostream>
#include <algorithm>
#include <cmath>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

#define MAX 1000001
int main()
{
	FAST;
	int a[MAX] = {0, };
	fill(a + 2, a + MAX, 1);
	for (int i = 2; i < sqrt(MAX); i++) {
		if (a[i] != 1) continue ;
		for (int j = 2; i * j < MAX; j++) {
			a[i * j] = 0;
		}
	}
	int inp;
	while (1) {
		cin >> inp;
		if (inp == 0) break;
		bool is_wrong = true;
		for (int i = 3; i < inp; i++) {
			if (a[i] && a[inp - i]) {
				cout << inp << " = " << i << " + " << inp - i << '\n';
				is_wrong = false;
				break ;
			}
		}
		if (is_wrong) cout << "Goldbach's conjecture is wrong." << '\n';
	}
	return 0;
}