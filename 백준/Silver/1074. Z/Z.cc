#include <iostream>
#include <vector>
#include <cmath>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

typedef vector<vector<int>> vvi;

int N, r,c;
int idx = 0;

void recursive(int N, int x, int y)
{
	if (x == r && y == c) {
		cout << idx;
		return ;
	}
	int size = pow(2, N);
	if (x <= r && r < x + size && y <= c && c < y + size) {
		int add = pow(2, (N - 1));
		recursive(N - 1, x, y);
		recursive(N - 1, x, y + add);
		recursive(N - 1, x + add, y);
		recursive(N - 1, x + add, y + add);
	} else {
		idx += size * size;
	}
}

int main()
{
	FAST;
	cin >> N >> r >> c;
	recursive(N, 0, 0);
	return 0;
}