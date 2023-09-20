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
	ListNode* oddEvenList(ListNode* head) {
		ListNode *odd_cur = 0, *even = 0, *even_cur = 0;
		if (!head)
			return 0;
		odd_cur = head;
		even_cur = head->next;
		even = head->next;
		while (even_cur && even_cur->next) {
			odd_cur->next = odd_cur->next->next;
			even_cur->next = even_cur->next->next;
			odd_cur = odd_cur->next;
			even_cur = even_cur->next;
		}
		odd_cur->next = even;
		return head;
	}
};