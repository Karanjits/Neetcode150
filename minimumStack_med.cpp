using namespace std;
#include<stack>
#include <iostream>
class MinStack {
public:
    stack<int> stack, minS;


    MinStack() {
        
    }
    
    void push(int val) {
        stack.push(val);
        if(minS.empty()) {
            minS.push(val);
        }
        else {
            if(val<minS.top()) {
                minS.push(val);
            }
        }
    }
    
    void pop() {
        if(stack.top() == minS.top()) {
            stack.pop(),minS.pop();
        }else {
            stack.pop();
        }
    }
    
    int top() {
        return stack.top();
    }
    
    int getMin() {
        return minS.top();
    }
};
