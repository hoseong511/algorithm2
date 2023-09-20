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
	ListNode* reverseBetween(ListNode* head, int left, int right) {
		int idx = 1;
		bool flg = false;
		ListNode *curr, *rev = 0 , *rev_tail, *tmp, *next, *prev = 0, *cut;
		curr = head;
		while (curr) {
			next = curr->next;
			if (idx == left) {
				cut = prev;
				flg = true;
			}
			if (flg) {
				if (!rev) rev_tail = curr;
				tmp = rev;
				rev = curr;
				rev->next = tmp;
			}
			if (idx == right) {
				flg = false;
				if (cut) cut->next = rev;
				else head = rev;
				rev_tail->next = next;
			}
			prev = curr;
			curr = next;
			idx++;
		}
		return head;
	}
};