class Solution {
public:
	vector<int> dailyTemperatures(vector<int>& f_list) {
		vector<int> res(f_list.size());
		vector<int> stack;
		for (size_t i = 0; i < f_list.size(); i++) {
			while (!stack.empty() && f_list[stack.back()] < f_list[i]) {
				int top = stack.back();
				res[top] = i - top;
				stack.pop_back();
			}
			stack.push_back(i);
		}
		return res;
	}
};