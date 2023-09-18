class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> res;
		int produc = 1;
		for (size_t i = 0; i < nums.size(); i++)
		{
			res.push_back(produc);
			produc *= nums[i];
		}
		produc = 1;
		for (int i = nums.size() - 1; i >= 0; i--)
		{
			res[i] *= produc;
			produc *= nums[i];
		}
		return res;
	}
};