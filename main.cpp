#include <iostream>
#include "MyStack.h"
#include "MyQueue.h"

using namespace std;

int main()
{
    cout << "=======MyStack=======" << endl;
    MyStack <int> stack;

    for (int i=1;i<=5;i++){
        stack.push(i);
    }
    cout<<"Stack size: "<<stack.size()<<endl;
    cout <<"Top stack element: " << stack.top() << endl;
    cout <<"Delete top element" << endl;
    stack.pop();
    cout<<"Stack size: "<<stack.size()<<endl;
    cout <<"Clear stack"<<endl;
    stack.clear();
    cout<<"Stack size: "<<stack.size()<<endl;
    cout <<"Delete top element" << endl;
    stack.pop();
    cout << endl;
    cout << "=======MyQueue=======" << endl;
    MyQueue<int> queue;

    for (int i=1;i<=5;i++){
        queue.push(i);
    }
        cout<<"Queue size: "<<queue.size()<<" elements"<<endl;
        cout<<"Elements of queue: ";
        queue.show();
        cout<<"Delete element"<<endl;
        cout<<"Delete element"<<endl;
        queue.pop();
        queue.pop();
        cout<<"Queue size: "<<queue.size()<<" elements"<<endl;
        cout<<"Elements of queue: ";
        queue.show();
    return 0;
}
