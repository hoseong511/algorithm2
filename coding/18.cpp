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

int main()
{
	Solution s;
	ListNode node1(1);
	add_node(&node1, 2);
	add_node(&node1, 3);
	add_node(&node1, 4);
	add_node(&node1, 5);
	ListNode node2(2);
	ListNode node3;
	add_node(&node2, 6);
	add_node(&node2, 4);
	
	ListNode* res = s.oddEvenList(&node2);
	while (res) {
		cout << res->val << '\n';
		res = res->next;
	}
	return 0;
}