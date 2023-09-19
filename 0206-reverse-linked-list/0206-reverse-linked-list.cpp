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
	
	ListNode* reverseList(ListNode* head) {
		ListNode* tar = 0, *tmp1, *tmp2;
		while (head) {
			tmp1 = tar;
			tmp2 = head->next;
			tar = head;
			tar->next = tmp1;
			head = tmp2;
		}
		return tar;
	}
};