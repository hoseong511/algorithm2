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
	bool isPalindrome(ListNode* head) {
		ListNode *fast = head, *slow = head, *rev = 0, *tmp, *tmp2;
		while (fast && fast->next) {
			fast = fast->next->next;
			tmp = rev;
			tmp2 = slow->next;
			rev = slow;
			rev->next = tmp;
			slow = tmp2;
		}
		if (fast)
			slow = slow->next;
		while (slow) {
			if (rev->val != slow->val)
				return false;
			slow = slow->next;
			rev = rev->next;
		}
		return true;
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
	//show_lst(&node1);
	bool res = s.isPalindrome(&node1);
	cout << res << '\n';
	return 0;
}