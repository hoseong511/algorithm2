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

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */