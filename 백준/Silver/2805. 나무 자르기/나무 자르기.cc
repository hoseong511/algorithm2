#include <iostream>
#include <sstream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	FAST;
	int N, M;
	cin >> N >> M;
	cin.ignore();
	vector<int> lst;
	string input;
	getline(cin, input);
	istringstream stream;
	stream.str(input);
	for (string line; getline(stream, line, ' ');) {
		lst.push_back(stoi(line));
	}
	long long start = 1;
	long long end = *max_element(lst.begin(), lst.end());
	long long mid = (start + end) / 2;
	while (start <= end) {
		long long res = 0;
		for (auto x : lst) {
			res += x >= mid ? x - mid : 0;
		}
		if (res < M) {
			end = mid - 1;
		} else if (res == M) {
			break; 
		} else {
			start = mid + 1;
		}
		mid = (start + end) / 2;
	}
	cout << mid;
	return 0;
}