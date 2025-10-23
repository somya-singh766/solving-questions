class MyQueue {
     stack<int> inStack, outStack;

    void moveInToOut() {
        while (!inStack.empty()) {
            outStack.push(inStack.top());
            inStack.pop();
        }}
public:
    MyQueue() {
        
    }
    
    void push(int x) {
                inStack.push(x);

    }
    
    int pop() {
       if (outStack.empty()) {
            moveInToOut();
        }
        int val = outStack.top();
        outStack.pop();
        return val; 
    }
    
    int peek() {
         if (outStack.empty()) {
            moveInToOut();
        }
        return outStack.top();
    }
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
