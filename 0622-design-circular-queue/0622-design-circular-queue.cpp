#include <deque>
#include <iostream>

using namespace std;

class MyCircularQueue {
public:
	deque<int> dq;
	int front;
	int back;
	size_t size;
    MyCircularQueue(int k) {
        dq.assign(k, -1);
		size = k;
		front = back = 0;
    }
    bool enQueue(int value) {
		if (dq[back] != -1)
			return false;
		dq[back] = value;
		back = (back + 1) % size;
		return true;
    }
    
    bool deQueue() {
		if (dq[front] == -1)
			return false;
		dq[front] = -1;
		front = (front + 1) % size;
		return true;
    }
    
    int Front() {
        return (isEmpty() ? -1 : dq[front]);
    }
    
    int Rear() {
		int tmp = back - 1;
		if (tmp < 0)
			tmp = size - 1;
        return (isEmpty() ? -1 : dq[tmp]);
    }
    bool isEmpty() {
		if (dq[front] == -1 && dq[back] == -1)
        	return (true);
		return false;
    }
    
    bool isFull() {
		if (front == back && dq[front] != -1)
			return true;
		return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */