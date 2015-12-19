#ifndef MYDEQUE
#define MYDEQUE

using namespace std;

template<typename Type>
class MyDeque{
    class Node{
    public:
        Type value;
        Node *next;
    };
    Node *begin, *end, *current;
    int count;
public:
    // default constructor
    MyDeque():begin(NULL),end(NULL),count(0){
    }
    //copy constructor
    MyDeque(const MyDeque& sourceList): begin(NULL),end(NULL),current(NULL){
        Node *buff = sourceList.begin;
        while(buff != NULL){
            this->push_back(buff->value);
            buff = buff->next;
        }
    }
    //destructor
    ~MyDeque(){
        while(begin != NULL){
            Node *temp = begin->next;
            delete begin;
            begin = temp;
        }
    }
    //put element to the top of deque
    void push_front(Type elem){
        Node *buff = new Node;
        buff->value = elem;
        if(begin == NULL){
            buff->next = NULL;
            begin = buff;
            end = buff;
        }else{
            buff->next = begin;
            begin = buff;
        }
        count++;
    }
    //put element to the end of deque
    void push_back(Type elem){
        Node *buff = new Node;
        buff->value = elem;
        buff->next = NULL;
        if(begin==NULL){
            begin = end = current = buff;
        }else{
            end->next=buff;
            end = buff;
        }
        count++;
    }
    //delete element from the front of the deque
    void pop_front(){
        if(empty()){
            cout<<"Deque is empty!"<<endl;
            exit(1);
        }else{
            Node *temp = begin->next;
            if(size()>1){
                delete begin;
                begin = temp;
                count--;
            }else{
                delete begin;
                begin = NULL;
                end = NULL;
                count = 0;
            }
        }
    }
    //delete element from the end of the deque
    void pop_back(){
        if(empty()){
            cout<<"Error: deque is empty!"<<endl;
            exit(1);
        }else{
            if(size()>1){
                Node *temp;
                temp = begin;
                while(temp->next != end){
                    temp = temp->next;
                }
                temp->next = NULL;
                delete end;
                end = temp;
            }else{
                delete begin;
                begin = NULL;
                end = NULL;
            }
            count--;
        }
    }
    //show elements of deque
    void show(){
        if(!empty()){
            Node *temp = begin;
            while(temp != NULL){
                cout<<temp -> value<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }else{
            cout<<"Deque is empty"<<endl;
        }
    }
    //return "true" if deque is empty
    bool empty() {
        return (size() == 0);
    }
    //number of elements of deque
    int size(){
        return count;
    }
    // eque cleaning
    void clear() {
        while(!empty())
            pop_back();
    }

};
#endif // MYDEQUE

