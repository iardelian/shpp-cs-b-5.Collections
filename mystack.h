#ifndef MYSTACK
#define MYSTACK

#include <iostream>

using namespace std;

template <typename type>
class MyStack {

public:
    //initializes a new empty stack
    MyStack();
    //destructor
    virtual ~MyStack();
    //put element to the stack
    void push(type data);
    //remove top element from the stack and show it's data
    type pop();
    //removes all elements from the stack
    void clear();
    //return true if stack is empty
    bool isEmpty() const;
    //show data of the top element of the stack
    type top() const;
    //show current number of the element in the stack
    int size() const;

private:
    static const int START_STACK_SIZE = 10;
    //array for storing elements
    type *array;
    //current size of array
    int currentSize;
    //if there will be not enough space for elements, size of the array will be increased by "START_STACK_SIZE" value
    void doubleArraySize();
    //current number of the element in array
    int numberOfElements;
};

/* Methods implementation */

template <typename type>
MyStack<type>::MyStack(){
    array = new type[START_STACK_SIZE];
    currentSize = START_STACK_SIZE;
    numberOfElements = 0; //start number of elements
}

template <typename type>
MyStack<type>::~MyStack(){
    delete[] array;
}

template <typename type>
void MyStack<type>::push(type data){
    if (numberOfElements == currentSize) { //check space for new element
        doubleArraySize();
    }
    array[numberOfElements] = data;
    numberOfElements++;
}

template <typename type>
type MyStack<type>::pop(){
    if (isEmpty()) {
        cout << "Error: Stack is empty!" << endl;
    }
    numberOfElements--;
    return array[numberOfElements];

}

template <typename type>
void MyStack<type>::clear(){
    numberOfElements = 0;
}

template <typename type>
bool MyStack<type>::isEmpty() const {
    return numberOfElements == 0;
}

template <typename type>
type MyStack<type>::top() const {
    if (isEmpty()) {
        cout << "Error: Stack is empty!" << endl;
    }
    return array[numberOfElements-1];
}

template <typename type>
int MyStack<type>::size() const{
    return numberOfElements;
}

template <typename type>
void MyStack<type>::doubleArraySize(){
    type *tempArray = array;
    currentSize += START_STACK_SIZE;
    array = new type[currentSize];

    for (int i = 0; i < numberOfElements; i++) {
        array[i] = tempArray[i];
    }
    delete[] tempArray;
}

#endif // MYSTACK
