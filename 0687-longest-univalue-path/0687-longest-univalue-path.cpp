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
		if (left != -1 && curr->val != curr->left->val)
			left = 0;
		else
			left++;
		int right = dfs(curr->right);
		if (right != -1 && curr->val != curr->right->val)
			right = 0;
		else
			right++;
		longest = max(longest, left + right);
		return max(left, right);
	}
	int longestUnivaluePath(TreeNode* root) {
		longest = 0;
		dfs(root);
		return longest;
	}
private:
	vector<int> lst;
	int longest;
};