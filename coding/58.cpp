#include <iostream>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* merge(ListNode* left, ListNode* right)
	{
		ListNode node;
		ListNode* cur = &node;
		while (left && right) {
			if (left->val <= right->val) {
				cur->next = left;
				left = left->next;
			} else {
				cur->next = right;
				right = right->next;
			}
			cur = cur->next;
		}
		if (left)
			cur->next = left;
		if (right)
			cur->next = right;
		return node.next;
	}
    ListNode* sortList(ListNode* head) {
		if (head == NULL || head->next == NULL)
			return head;
		ListNode* fast = head;
		ListNode* slow = head;
		ListNode* tmp = NULL;
		while (fast && fast->next) {
			tmp = slow;
			slow = slow->next;
			fast = fast->next->next;
		}
		tmp->next = nullptr;
		ListNode* left = sortList(head);
		ListNode* right = sortList(slow);
		return merge(left, right);
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
	ListNode* test = s.sortList(&lst);
	return 0;
}