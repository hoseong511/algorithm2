#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	cout << N / 5 + N / 25 + N / 125;
	

	return 0;
}
