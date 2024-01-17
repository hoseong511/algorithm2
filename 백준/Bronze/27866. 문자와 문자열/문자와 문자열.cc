#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	string inp;
	int idx;
	cin >> inp >> idx;
	cout << inp[idx - 1] << '\n';
	return 0;
}