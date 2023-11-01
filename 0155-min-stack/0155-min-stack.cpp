class Node{
    public:
        int data;
        Node * next ;
};
class Stack{
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void push(int x);
    void pop();
    int isFull();
    int isEmpty();
    int stackTop(){
        return top->data;
    }
};

Stack::Stack() {
    top = nullptr;
}
 
Stack::~Stack() {
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}
 
void Stack::push(int x) {
    Node* t = new Node;
    if(t!=nullptr) {
        t->data = x;
        t->next = top;
        top = t;
    }
}
 
void Stack::pop() {
    Node* p;
    if(top!=nullptr) {
        p = top;
        top = top->next;
        delete p;
    }
}

int Stack::isFull() {
    Node* t = new Node;
    int r = t ? 1 : 0;
    delete t;
    return r;
}
 
int Stack::isEmpty() {
    return top ? 0 : 1;
}
 
class MinStack {
public:
    Stack arr,min_arr;

    MinStack() {
        
    }
    
    void push(int val) ;
    void pop();
    int top();
    int getMin();
};

void MinStack::push(int val){
    arr.push(val);
    if(!min_arr.isEmpty()){
        val = min(val,min_arr.stackTop());
    }
    min_arr.push(val);
}


void MinStack::pop(){
    arr.pop();
    min_arr.pop();
}

int MinStack::getMin(){
    return min_arr.stackTop();
}

int MinStack::top(){
    return arr.stackTop();
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */