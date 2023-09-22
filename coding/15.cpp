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
	
	ListNode* reverseList(ListNode* head) {
		ListNode* tar = 0, *next;
		while (head) {
			next = head->next;
			head->next = tar;
			tar = head;
			head = next;
		}
		return tar;
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
	ListNode* res = s.reverseList(&node1);
	while (res) {
		cout << res->val << '\n';
		res = res->next;
	}
	return 0;
}