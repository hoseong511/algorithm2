class MyStack {
public:
	MyStack() {
		
	}
		
	void push(int x) {
		int size = q.size();
		q.push(x);
		while (size > 0) {
			q.push(q.front());
			q.pop();
			size--;
		}
	}
	int pop() {
		int res = top();
		q.pop();
		return res;
	}
		
	int top() {
		return q.front();
	}
		
	bool empty() {
		return q.empty();
	}
private:
	queue<int> q;
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