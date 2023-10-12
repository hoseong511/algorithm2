struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* search(ListNode* head)
	{
		ListNode* fast = head;
		ListNode* slow = head;
		while (fast && fast->next) {
			slow = slow->next;
			fast = fast->next->next;
		}
		if (fast)
			slow = slow->next;
		return slow;
	}
    ListNode* sortList(ListNode* head) {
		ListNode* node;
		return node;
    }
};

void add_node(ListNode* lst, int val)
{
	ListNode* node;
	node = new ListNode(val);
	while (lst && lst->next)
		lst = lst->next;
	lst->next = node;
}

int main()
{
	Solution s;
	ListNode lst(4);
	add_node(&lst, 2);
	add_node(&lst, 1);
	add_node(&lst, 3);
	return 0;
}