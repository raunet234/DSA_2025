//reverse the queue
// function Template for C++

class Solution {
  public:
    queue<int> reverseQueue(queue<int> &q) {
        // code here.
        stack<int> st;
        
        //while q is not empty,pop from it and push in the stack
        while(!q.empty()){
            int frontElement = q.front();
            q.pop();
            st.push(frontElement);
        }
        while(!st.empty()){
            int frontElement = st.top();
            st.pop();
            q.push(frontElement);
        }
        
        return q;
    }
};



// Reverse first K of a Queue
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        stack<int> st;
        if(k>q.size()) return q;
        //push first k element in stack
        for(int i=0;i<k;i++){
            st.push(q.front());
            q.pop();
        }
        
        //enqueue back the elements from stack
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        //now pop n-k element from queue and again push
        // back in same queue
        for(int i=0;i<q.size()-k;i++){
            q.push(q.front());
            q.pop();
        }
        
        return q;
        
    }
};