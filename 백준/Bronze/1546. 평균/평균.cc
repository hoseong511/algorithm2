#include <iostream>
#include <vector>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N;
	double result = 0.0, max = -1.0;
	vector<int> lst;

	cin >> N;
	lst.assign(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> lst[i];
		if (max < lst[i])
			max = lst[i];
		result += lst[i];
	}
	result = result / max * 100.0 / N;
	cout << result;
	return 0;
}