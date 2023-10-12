class Solution {
public:
	ListNode* insertionSortList(ListNode* head) {
		ListNode* curr;
		if (!head)
			return NULL;
		curr = head->next;
		int i = 1;
		while (curr) {
			int cnt = i;
			int flg = 0;
			ListNode* tmp = curr;
			ListNode* next = curr->next;
			ListNode* idx = head;
			ListNode* prev = idx;
			curr = curr->next;
			while (cnt) {
				if (flg == 0 && tmp->val < idx->val) {
					if (cnt == i) {
						tmp->next = idx;
						head = tmp;
					} else {
						prev->next = tmp;
						tmp->next = idx;
					}
					flg = 1;
				} else {
					prev = idx;
				}
				if (flg == 1 && cnt == 1)
					idx->next = next;
				idx = idx->next;
				cnt--;
			}
			i++;
		}
       return head;
    }
};