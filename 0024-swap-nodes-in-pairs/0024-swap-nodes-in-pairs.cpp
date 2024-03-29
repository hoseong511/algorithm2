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
	ListNode* swapPairs(ListNode* head) {
		ListNode* tar = head, *prev = 0, *n1, *n2, *tmp;
		while (head && head->next) {
			n1 = head;
			n2 = head->next;
			tmp = n2->next;
			n1->next = n2->next;
			n2->next = n1;
			if (!prev) {
				prev = n1;
				tar = n2;
			} else {
				prev->next = n2;
				prev = n1;
			}
			head = tmp;
		}
		return tar;
	}
};

