#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void add_node(ListNode* head, int val)
{
	ListNode* node = new ListNode(val);
	ListNode* tar = head;
	while (tar->next) {
		tar = tar->next;
	}
	tar->next = node;
}

void show_lst(ListNode* head)
{
	ListNode* target = head;
	while (target) {
		cout << target->val << '\n';
		target = target->next;
	}
}

class Solution {
public:
	ListNode* last(ListNode* head) {
		ListNode* tar = head;
		while (tar && tar->next) {
			tar = tar->next;
		}
		return tar;
	}
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		if (!list1 || (list2 && list1->val > list2->val))
			swap(list1, list2);
		if (list1)
			list1->next = mergeTwoLists(list1->next, list2);
		return list1;
	}
};

int main()
{
	Solution s;
	ListNode node1(1);
	add_node(&node1, 2);
	add_node(&node1, 3);
	add_node(&node1, 2);
	add_node(&node1, 1);
	ListNode node2(1);
	add_node(&node2, 2);
	add_node(&node2, 3);
	add_node(&node2, 2);
	add_node(&node2, 1);
	ListNode* res = s.mergeTwoLists(&node1, &node2);
	(void) res;
	return 0;
}