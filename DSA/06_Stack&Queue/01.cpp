#include<iostream>

using namespace std;

class Solution {
  public:
  
  void solve(stack<int>& s, int curr, int mid) {
      if(s.empty()) return;
      
      int topElement = s.top();
      s.pop();

      if(curr == mid) return; // skip the middle element
      
      solve(s, curr + 1, mid);
      
      s.push(topElement); // push back after recursion
  }

  // Function to delete middle element of a stack.
  void deleteMid(stack<int>& s) {
      int size = s.size();         // get current size
      int mid = size / 2;          // middle index (0-based)
      solve(s, 0, mid);            // start recursion from 0
  }
};
