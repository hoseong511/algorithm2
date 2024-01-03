#include <iostream>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef pair<int,int> pii;
typedef pair<pii,string> pis;
int main()
{
	FAST;
	int N;
	pis a[100001];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int n1;
		string name;
		cin >> n1 >> name;
		a[i] = {{n1, i}, name};
	}
	sort(a, a + N, [](pis a, pis b){
		if (a.first.first == b.first.first) return a.first.second < b.first.second;
		return a.first < b.first; }
	);
	for (int i = 0; i < N; i++)
	{
		cout << a[i].first.first << ' ' << a[i].second << '\n';
	}
	return 0;
}