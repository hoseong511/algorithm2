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
	//add_node(&node2, 6);
	//add_node(&node2, 4);
	
	ListNode* res = s.reverseBetween(&node2, 1, 1);
	while (res) {
		cout << res->val << '\n';
		res = res->next;
	}
	return 0;
}