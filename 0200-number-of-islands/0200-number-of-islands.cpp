class Solution {
public:
	void dfs(vector<vector<char>>& grid, int i, int j) {
		if ((i < 0 || i > y ) || (j < 0 || j > x) || grid[i][j] == '0')
			return ;
		grid[i][j] = '0';
		dfs(grid, i + 1, j);
		dfs(grid, i - 1, j);
		dfs(grid, i, j + 1);
		dfs(grid, i, j - 1);
	}
	int numIslands(vector<vector<char>>& grid) {
		int cnt = 0;
		y = grid.size() - 1;
		x = grid[0].size() - 1;
		for (size_t i = 0; i < grid.size(); i++)
		{
			for (size_t j = 0; j < grid[i].size(); j++)
			{
				if (grid[i][j] == '1') {
					dfs(grid, i, j);
					cnt++;
				}
			}
		}
		return cnt;
	}
private:
	int x;
	int y;
};