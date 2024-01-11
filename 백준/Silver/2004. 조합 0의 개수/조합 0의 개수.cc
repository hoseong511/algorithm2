#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

#define MAX 2000000000

long long cnt_zero(long long num, int sp)
{
	long long res = 0;
	for (long long i = sp; i <= num; i*=sp) {
		res += num / i;
	}
	return res;
}

int main()
{
	FAST;
	long long M, N;
	cin >> N >> M;
	cout << min(cnt_zero(N,5) - cnt_zero(M,5) - cnt_zero(N - M,5),
				cnt_zero(N,2) - cnt_zero(M,2) - cnt_zero(N - M, 2));
	return 0;
}
