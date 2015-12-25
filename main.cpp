#include <iostream>
#include "mystack.h"
#include "myqueue.h"
#include "mydeque.h"

using namespace std;

int main()
{
    cout << "=======MyStack=======\n" << endl;
    MyStack <int> stack;
    
    for (int i=1; i<=5; i++) {
        stack.push(i);
    }
    cout << "Stack size: " << stack.size() << endl;
    cout << "Top stack element: " << stack.top() << endl;
    cout << "Delete top element" << endl;
    stack.pop();
    cout << "Stack size: " << stack.size() << endl;
    cout << "Clear stack" << endl;
    stack.clear();
    cout << "Stack size: " << stack.size() << endl;
    cout << "Delete top element" << endl;
    stack.pop();
    cout << endl;
 
    cout << "=======MyQueue=======\n" << endl;
    cout << endl;  
    MyQueue<int> queue;
    
    for (int i=1; i<=5; i++) {
        queue.push(i);
    }
    cout << "Queue size: " << queue.size() << " elements" << endl;
    cout << "Elements of queue: ";
    queue.show();
    cout << "Delete element" << endl;
    cout << "Delete element" << endl;
    queue.pop();
    queue.pop();
    cout << "Queue size: " << queue.size() << " elements" << endl;
    cout << "Elements of queue: ";
    queue.show();
    cout << endl;        
   
    cout << "=======MyDeque=======\n" << endl;  
    MyDeque<int> deque;
    
    for (int i=5; i>0; i--) {
        deque.push_front(i);
    }
    cout << "Push front 5 elements" << endl;
    cout << "Deque size: " << deque.size() << endl;
    cout << "Show deque elements: ";
    deque.show();
    cout << "Push back 4 elements" << endl;
    
    for (int i=4; i>0; i--) {
        deque.push_back(i);
    }
    cout << "Show deque elements: ";
    deque.show();
    cout << "Delete first element" << endl;
    deque.pop_front();
    cout << "Show deque elements: ";
    deque.show();
    cout << "Delete last element" << endl;
    deque.pop_back();
    cout << "Show deque elements: ";
    deque.show();
    cout << "Deque size: " << deque.size() << endl;
    cout << "Clean deque" << endl;
    deque.clear();
    cout << "Show deque elements: ";
    deque.show();
        
    return 0;
}
