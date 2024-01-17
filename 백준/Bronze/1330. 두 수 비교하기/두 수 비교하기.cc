#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
#define MAX 1001
int main()
{
	int A, B;
	cin >> A >> B;
	if (A > B)
		cout << '>';
	else if (A == B)
		cout << "==";
	else
		cout << '<';
	return 0;
}