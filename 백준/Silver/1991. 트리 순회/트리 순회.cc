#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
pair<char, char> g[26];

void preorder(char a)
{
	if (a != '.') {
		cout << a;
		preorder(g[a - 'A'].first);
		preorder(g[a-'A'].second);
	}
}

void inorder(char a)
{
	if (a != '.') {
		inorder(g[a-'A'].first);
		cout << a;
		inorder(g[a-'A'].second);
	}

}

void postorder(char a)
{
	if (a != '.') {
		postorder(g[a-'A'].first);
		postorder(g[a-'A'].second);
		cout << a;
	}
}

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		char node, l, r;
		cin >> node >> l >> r;
		g[node - 'A'].first = l;
		g[node - 'A'].second = r;
	}
	preorder('A');
	cout << '\n';
	inorder('A');
	cout << '\n';
	postorder('A');
	return 0;

}
