#ifndef MYQUEUE
#define MYQUEUE
#include <iostream>

using namespace std;

template <class T>
class MyQueue{
    class Node{
    public:
        T value;
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
    MyQueue(MyQueue &list){
        begin = NULL;
        end = NULL;
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
    void push(T m_value){
        Node *buff = new Node;
        buff->value = m_value;
        buff->next = NULL;
        if(begin==NULL){
            begin = end = buff;
        }
        else{
            end->next=buff;
            end = buff;
        }
        count++;
    }
    // Print queue
    void show(){
        Node *temp = begin;
        while(temp != NULL){
            cout<<temp->value<< " ";
            temp = temp->next;
        }
        cout<<endl;
    }
    // remove an element from head of the queue
    void pop(){
        if(isEmpty()){
            cout<<"Error: list is empty!"<<endl;
        }else{
            Node *temp = begin->next;
            if((begin != NULL)&&(temp != NULL)){
                delete begin;
                begin = temp;
                count--;
            }
            else if((begin != NULL)&&(temp == NULL)){
                delete begin;
                count = 0;
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
    T front(){
        return begin->value;
    }
    // last element of the queue
    T back(){
        return end->value;
    }
    // clean queue
    void clear() {
        while(!isEmpty()){
            pop();
        }
    }
};
#endif // MYQUEUE
