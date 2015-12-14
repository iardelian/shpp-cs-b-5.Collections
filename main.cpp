#include <iostream>
#include "MyStack.h"

using namespace std;

int main()
{
    MyStack <int> stack;

    for (int i=1;i<=5;i++){
        stack.push(i);
    }
    cout<<"Stack size: "<<stack.size()<<endl;
    cout <<"Top stack element: " << stack.top() << endl;
    cout <<"Delete top element" << endl;
    stack.pop();
    cout<<"Stack size: "<<stack.size()<<endl;
    cout <<"Clear stack" << endl;
    stack.clear();
    cout<<"Stack size: "<<stack.size()<<endl;
    cout <<"Delete top element" << endl;
    stack.pop();
    return 0;
}
