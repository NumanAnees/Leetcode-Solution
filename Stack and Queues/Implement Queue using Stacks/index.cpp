//-------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>

using namespace std;

class MyQueue {
  public:
    stack < int > input, output;
  /** Initialize your data structure here. */
  MyQueue() {

  }

  /** Push element x to the back of queue. */
  void push(int x) {
    cout << "The element pushed is " << x << endl;
    input.push(x);
  }

  /** Removes the element from in front of queue and returns that element. */
  int pop() {
    // shift input to output 
    if (output.empty())
      while (input.size())
        output.push(input.top()), input.pop();

    int x = output.top();
    output.pop();
    return x;
  }

  /** Get the front element. */
  int top() {
    // shift input to output 
    if (output.empty())
      while (input.size())
        output.push(input.top()), input.pop();
    return output.top();
  }

  int size() {
    return (output.size() + input.size()); 
  }

};
int main() {
  MyQueue q;
  q.push(3);
  q.push(4);
  cout << "The element poped is " << q.pop() << endl;
  q.push(5);
  cout << "The top of the queue is " << q.top() << endl;
  cout << "The size of the queue is " << q.size() << endl;

}

//------------------------------------------Leetcode Solution--------------------------------------------
class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
     input.push(x);   
    }
    
    int pop() {
        if(!output.empty()){
            int n = output.top();
            output.pop();
            return n;
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            //poping after shuffle
            int n = output.top();
            output.pop();
            return n;
        }
    }
    
    int peek() {
        if(!output.empty()){
           return output.top();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
           return output.top();//top fifo
        }
    }
    
    bool empty() {
       if(input.empty()&&output.empty()){
           return true;
       } 
        else{
            return false;
        }
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

//------------------------------------------------------------------------------------------------------------
