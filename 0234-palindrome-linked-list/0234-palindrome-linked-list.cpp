/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
	bool isPalindrome(ListNode* head) {
		vector<int> tmp;
		while (head) {
			tmp.push_back(head->val);
			head = head->next;
		}
		for (size_t i = 0, j = tmp.size() - 1; i < tmp.size() / 2; i++,j--)
		{
			if (tmp[i] == tmp[j])
				continue ;
			return false;
		}
		return true;
	}
};