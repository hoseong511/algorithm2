#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int arrayPairSum(vector<int>& nums) {
		vector<int> lst;
		int sum = 0;
		sort(nums.begin(), nums.end());
		for (auto x: nums) {
			lst.push_back(x);
			if (lst.size() == 2) {
				sum += *min(lst.begin(), lst.end());
				lst.clear();
			}
		}
		return sum;
	}
};

int main()
{
	Solution s;
	vector<int> nums{3,2,4};
	int res = s.arrayPairSum(nums);
	cout << res << endl;
	return 0;
}