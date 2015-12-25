#ifndef MYQUEUE
#define MYQUEUE

#include <iostream>

using namespace std;

template <typename type>
class MyQueue{
    class Node{
    public:
        type value;
        Node *next;
    };
    Node *begin;
    Node *end;
    int count;
public:
    // default constructor
    MyQueue():begin(NULL),end(NULL),count(0){
    }
    
    // copy constructor
    MyQueue(MyQueue &list):begin(NULL),end(NULL){
        Node *buff = list.begin;
        while(buff != NULL){
            MyQueue::value->push(buff->value);
            buff = buff->next;
        }
    }
    
    // destructor
    ~MyQueue(){
        while(begin != NULL){
            Node *temp = begin->next;
            delete begin;
            begin = temp;
        }
    }
    
    // Add element to the end of the queue
    void push(type m_value){
        Node *buff = new Node;
        buff->value = m_value;
        buff->next = NULL;
        if (begin==NULL) {
            begin = end = buff;
        } else {
            end->next=buff;
            end = buff;
        }
        count++;
    }
    
    // Print queue
    void show(){
        Node *temp = begin;
        while (temp != NULL) {
            cout << temp->value << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    
    // remove an element from head of the queue
    void pop(){
        if (isEmpty()) {
            cout << "Error: list is empty!" << endl;
        } else {
            while (!isEmpty()) {
                pop();
            }
        }
    }
    
    // check if queue is empty
    bool isEmpty() {
        return (size() == 0);
    }
    
    // number of elements in the queue
    int size(){
        return count;
    }
    
    // first element of the queue
    type front(){
        return begin->value;
    }
    
    // last element of the queue
    type back(){
        return end->value;
    }
    
    // clean queue
    void clear() {
        while (!isEmpty()) {
            pop();
        }
    }
};

#endif // MYQUEUE
