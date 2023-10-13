#include <iostream>
#include <vector>

using namespace std;

template<typename T>
ostream& operator<< (ostream& os, vector<T> vec)
{
	char comm1[3] = {0, ' ', 0};
	for (auto x : vec) {
		os <<  comm1 << x;
		comm1[0] = ',';
	}
	return os;
}

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
			ListNode* tar = curr;
			ListNode* next = curr->next;
			ListNode* idx = head;
			ListNode* prev = idx;
			curr = curr->next;
			while (cnt) {
				if (flg == 0 && tar->val < idx->val) {
					if (cnt == i) {
						tar->next = idx;
						head = tar;
					} else {
						prev->next = tar;
						tar->next = idx;
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
	ListNode lst(-1);
	add_node(&lst, 5);
	add_node(&lst, 3);
	add_node(&lst, 4);
	add_node(&lst, 0);
	ListNode* test = s.insertionSortList(&lst);
	return 0;
}

		// for (int i = 1; i < arr.size(); i++) {
		// 	int tmp = arr[i];
		// 	int idx = i;
		// 	for (int j = i - 1; j >= 0; j--) {
		// 		if (arr[j] > tmp) {
		// 			arr[idx] = arr[j];
		// 		} else {
		// 			arr[idx] = tmp;
		// 			tmp = arr[j];
		// 		}
		// 		if (j == 0)
		// 			arr[j] = tmp;
		// 		idx--;
		// 	}
		// }
 