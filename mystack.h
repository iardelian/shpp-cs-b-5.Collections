#ifndef MYSTACK
#define MYSTACK

#include <iostream>

using namespace std;

template <typename type>
class MyStack{
private:
    struct Node{
        type m_data;
        Node *previousElement; // pointer to the previous element of the stack

        Node(){
        //default constructor
        }
        Node(type data){ // constructor
            m_data = data;
        }
    };

    Node *topElement = new Node();
    int stackSize;// number of elements in the stack
public:
    MyStack():stackSize(0){
        // initial size of the stack is equal to zero
    }
    ~MyStack(){
        // destructor
    }

    void push(type m_data){
        Node *newElement = new Node(m_data);//create a pointer to the new element
        if(stackSize == 0){//If there are no elements in the stack, the top of the stack is a new element
            topElement = newElement;
        }else{
            newElement->previousElement = topElement; // previous element becomes the top element
            topElement = newElement;
        }
        stackSize++; // increase the number of elements after each addition of element
    }

    type top(){ // top of the stack
        return topElement->m_data;
    }

    void pop(){
        if(isEmpty()){
            Node* buff = topElement;
            topElement = topElement->previousElement;
            delete buff;
            stackSize--; // reduce the number of elements after each removal of element
        }else{
            cout << "Error: stack underflow!" << endl; // if stack if isEmpty
        }
    }

    void clear(){
        while (stackSize!=0){
            Node* buff = topElement;
            topElement = topElement->previousElement;
            delete buff;
            stackSize--;
        }
    }

    int size(){ // get stack size
        return stackSize;
    }

    //if stack is empty - return true
    bool isEmpty(){
        return (stackSize != 0);
    }
};

#endif // MYSTACK
