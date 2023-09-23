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
	int maxDepth(TreeNode* root) {
		queue<TreeNode*> q;
		int depth = 0;
		if (root == NULL)
			return 0;
		q.push(root);
		while (!q.empty()) {
			depth++;
			size_t len = q.size();
			for (size_t i = 0; i < len; i++)
			{
				TreeNode* tar = q.front();
				if (tar->left) q.push(tar->left);
				if (tar->right) q.push(tar->right);
				q.pop();
			}
		}
		return depth;
	}
};