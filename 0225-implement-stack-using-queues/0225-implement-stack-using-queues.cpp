class MyStack {
public:
	MyStack() {
		
	}
		
	void push(int x) {
		stack.push(x);
	}
	int pop() {
		int top = stack.back();
		while (!stack.empty()) {
			if (top != stack.front())
				tmp.push(stack.front());
			stack.pop();
		}
		while (!tmp.empty()) {
			stack.push(tmp.front());
			tmp.pop();
		}
		return top;
	}
		
	int top() {
		return stack.back();
	}
		
	bool empty() {
		return stack.empty();
	}
private:
	queue<int> stack;
	queue<int> tmp;
};
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */