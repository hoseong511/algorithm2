#include <cstdio>
#include <vector>

using namespace std;

struct Node {
	int val;
	vector<Node*> child;
	Node(int value) : val(value) {}
};

Node* init_node(int val)
{
	Node* node;
	node = new Node(val);
	return node;
}

int main()
{
	int N, M, V;
	int x, y;
	vector<Node*> lst;
	Node* root;

	scanf("%d %d %d", &N, &M, &V);
	root = init_node(V);
	lst.push_back(root);
	for (int i = 0; i < M; i++) {
		scanf("%d %d", &x, &y);
		
		if (find(lst.begin(), lst.end(), x) == lst.end())

		if (find(lst.begin(), lst.end(), y) == lst.end()) {
			Node* tmp  = init_node(y);
			lst.push_back(tmp);
			root->child.push_back(tmp);
		}

		
	}
	return 0;
}