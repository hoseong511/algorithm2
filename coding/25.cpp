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

int main()
{
	MyCircularQueue myCircularQueue(3);
	cout << myCircularQueue.enQueue(1) << '\n'; // return True
	//cout << myCircularQueue.enQueue(2) << '\n'; // return True
	//cout << myCircularQueue.enQueue(3) << '\n'; // return True
	//cout << myCircularQueue.enQueue(4) << '\n'; // return False
	cout << myCircularQueue.Rear() << '\n';     // return 3
	cout << myCircularQueue.isFull() << '\n';   // return True
	cout << myCircularQueue.deQueue() << '\n';  // return True
	cout << myCircularQueue.enQueue(4) << '\n'; // return True
	cout << myCircularQueue.Rear() << '\n';     // return 4
	return 0;
}