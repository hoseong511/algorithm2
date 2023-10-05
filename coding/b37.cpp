#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main()
{
	FAST;
	int N, input;
	double result = 0.0, max = -1.0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (max < input)
			max = input;
		result += input;
	}
	result = result / max * 100.0 / N;
	cout << result;
	return 0;
}