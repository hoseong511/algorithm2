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