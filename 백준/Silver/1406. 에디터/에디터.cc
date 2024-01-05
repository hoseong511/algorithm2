#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef struct node {
	char val;
	struct node *next;
	struct node *prev;
} t_node;

t_node *head = NULL;
t_node *cur = NULL;

void insert(char val)
{
	t_node *node = (t_node *)malloc(sizeof(t_node));
	node->val = val;
	node->prev = NULL;
	node->next = NULL;
	
	if (head->next == NULL) { // begin
		head->next = node;
		node->prev = head;
		cur = node;
	} else if (cur->next == NULL) { //end 
		node->prev = cur;
		cur->next = node;
		cur = node;
	} else if (cur->next != NULL) { 
		t_node *tmp = cur->next;
		node->next = tmp;
		node->prev = cur;
		cur->next = node;
		tmp->prev = node;
		cur = node;
	}
}

void del()
{
	if (cur != head) {
		cur->prev->next = cur->next;
		if (cur->next)
			cur->next->prev = cur->prev;
        free(cur);
		cur = cur->prev;
	}
}

void left()
{
	if (cur->prev) {
		cur = cur->prev;
	}
}

void right()
{
	if (cur->next) {
		cur = cur->next;
	}
}

int main()
{
	FAST;
	string inp;
	int N;
	cin >> inp >> N;
	head = (t_node*)malloc(sizeof(t_node));
	head->val = 0;
	head->next = NULL;
	head->prev = NULL;
	for (auto x : inp) {
		insert(x);
	}
	for (int i = 0; i < N; i++) {
		char cmd, arg;
		cin >> cmd;
		if (cmd == 'P') {
			cin >> arg;
			insert(arg);
		} else if (cmd == 'L') {
			left();
		} else if (cmd == 'D') {
			right();
		} else if (cmd == 'B') {
			del();
		}
	}
    cur = head->next;
	while (cur) {
		cout << cur->val;
		cur = cur->next;
	}
	return 0;
}
