#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* init_node(string val) {
	TreeNode* node;
	int num = val == "null" ? -101 : atoi(val.c_str());
	if (num == -101)
		return nullptr;
	node = new TreeNode(num);
	return node;
}

TreeNode* add_node(TreeNode* root, TreeNode* node, queue<TreeNode*>& q, int idx) {
	if (root == NULL) {
		root = node;
	} else if (q.front() == nullptr) {
		q.pop();
	} else if (q.front()->left == nullptr && idx % 2 == 1) {
		q.front()->left = node;
	} else {
		q.front()->right = node;
		q.pop();
	}
	q.push(node);
	return root;
}

TreeNode* mktree(vector<string>& lst) {
	TreeNode* root = 0;
	queue<TreeNode*> q;
	for (size_t i = 0; i < lst.size(); i++) {
		TreeNode* node = init_node(lst[i]);
		root = add_node(root, node, q, i);
	}
	return root;
}

 
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

int main()
{
	Solution s;
	vector<string> lst{"3", "9", "20", "null", "null", "15", "7"};
	TreeNode *root = mktree(lst);
	cout << s.maxDepth(root) << '\n';
	return 0;
}