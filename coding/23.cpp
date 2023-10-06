#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
		while (!stack.empty()) {
			tmp.push(stack.top());
			stack.pop();
		}
        tmp.push(x);
		while (!tmp.empty()) {
			stack.push(tmp.top());
			tmp.pop();
		}
    }
    
    int pop() {
        int res = peek();
		stack.pop();
		return res;
    }
    
    int peek() {
        return stack.top();
    }
    
    bool empty() {
        return stack.empty();
    }
private:
	stack<int> tmp;
	stack<int> stack;
};

int main (void)
{
	MyQueue* obj = new MyQueue();
	obj->push(1);
	obj->push(2);
	cout << obj->peek() << '\n';
	obj->pop();
	cout << obj->peek() << '\n';
	return 0;
}