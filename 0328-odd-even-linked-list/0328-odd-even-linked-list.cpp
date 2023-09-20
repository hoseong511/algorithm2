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
		ListNode* odd = 0, *odd_cur = 0, *even = 0, *even_cur = 0, *tmp;
		int idx = 1;
		while (head) {
			tmp = head->next;
			int odd_n = idx % 2;
			if (odd_n) {
				if (!odd_cur) {
					odd_cur = head;
					odd = head;
				} else {
					odd_cur->next = head;
					odd_cur = odd_cur->next;
				}
			} else {
				if (!even_cur) {
					even_cur = head;
					even = head;
				} else {
					even_cur->next = head;
					even_cur = even_cur->next;
				}
			}
			head = tmp;
			idx++;
		}
		if (odd_cur && even_cur) {
			odd_cur->next = even;
			even_cur->next = 0;
		}
		return odd ? odd : even;
	}
};