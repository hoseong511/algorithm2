/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	int dfs(TreeNode* curr) {
		if (!curr)
			return -1;
		int left = dfs(curr->left);
		int right = dfs(curr->right);
		longest = max(longest, left + right + 2);
		return max(left, right) + 1;
	}
	int diameterOfBinaryTree(TreeNode* root) {
		longest = INT_MIN;
		dfs(root);
		return longest;
	}
private:
	vector<int> lst;
	int longest;
};
