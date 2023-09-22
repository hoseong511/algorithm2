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
				prev = n1;
				prev->next = n2;
			}
			head = tmp;
		}
		return tar;
	}
};

int main()
{
	Solution s;
	ListNode node1(2);
	add_node(&node1, 4);
	add_node(&node1, 3);
	add_node(&node1, 1);
	add_node(&node1, 3);
	add_node(&node1, 1);
	add_node(&node1, 3);
	add_node(&node1, 1);
	ListNode node2(5);
	ListNode node3;
	add_node(&node2, 6);
	add_node(&node2, 4);
	
	ListNode* res = s.swapPairs(&node1);
	while (res) {
		cout << res->val << '\n';
		res = res->next;
	}
	return 0;
}