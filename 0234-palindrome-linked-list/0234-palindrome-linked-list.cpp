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
		ListNode *fast = head, *slow = head, *rev = 0, *tmp, *tmp2;
		while (fast && fast->next) {
			fast = fast->next->next;
			tmp = rev;
			tmp2 = slow->next;
			rev = slow;
			rev->next = tmp;
			slow = tmp2;
		}
		if (fast)
			slow = slow->next;
		while (slow) {
			if (rev->val != slow->val)
				return false;
			slow = slow->next;
			rev = rev->next;
		}
		return true;
	}
};