#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int buy = INT_MAX;
		int max = 0;
		int profit = 0;
		for (size_t i = 0; i < prices.size(); i++)
		{
			if (prices[i] < buy)
				buy = prices[i];
			profit = prices[i] - buy;
			if (max < profit)
				max = profit;
		}
		return max;
	}
};

int main()
{
	Solution s;
	vector<int> nums{2, 4, 1};
	int res = s.maxProfit(nums);
	cout << res << '\n';
	return 0;
}