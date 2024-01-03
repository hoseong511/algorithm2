#include <iostream>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
typedef pair<string, vector<int>> psv;
int main()
{
	FAST;
	int N;
	psv a[100001];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string name;
		vector<int> score(3);
		cin >> name >> score[0] >> score[1] >> score[2];
		a[i] = {name, score};
	}
	sort(a, a + N, [](psv a, psv b){
		if (a.second[0] == b.second[0]) {
			if (a.second[1] == b.second[1]) {
				if (a.second[2] == b.second[2]) {
					return a.first < b.first;
				}
				return a.second[2] > b.second[2];
			}
			return a.second[1] < b.second[1];
		}
		return a.second[0] > b.second[0]; }
	);
	for (int i = 0; i < N; i++)
	{
		cout << a[i].first << '\n';
	}
	return 0;
}