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
	ListNode* init(int val) {
		ListNode* node;
		node = new ListNode(val);
		node->next = 0;
		return node;
	}
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* tar = 0, *res, *tmp;
		int up = 0;
		while (l1 || l2 || up) {
			int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + up;
			up = 0;
			if (sum > 9) up = 1;
			tmp = init(sum % 10);
			if (tar == 0) {
				tar = tmp;
				res = tar;
			} else {
				tar->next = tmp;
				tar = tar->next;
			}
			if (l1)	l1 = l1->next;
			if (l2) l2 = l2->next;
		}
		return res;
	}
};