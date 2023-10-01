#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

set<vector<int>> res;

void dfs(vector<int>& tar, int n, int s, int idx)
{
    if (n == 0) {
        res.insert(tar);
        return ;
    }
    for (int i = idx; i < s; i++) {
        tar.push_back(i);
        dfs(tar, n - 1, s - i, i + 1);
    }
}

vector<int> solution(int n, int s) {
    vector<int> answer;
    vector<int> tar;
    // dfs(tar, n, s);
//     sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
	return 0;
}