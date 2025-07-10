/*Interleave the First Half of the Queue with Second Half
*/
class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        // This function interleaves the queue:
        // Example: Input: 11 12 13 14 15 16 17 18 19 20
        // Output: 11 16 12 17 13 18 14 19 15 20

        stack<int> st;
        int halfSize = q.size() / 2;

        // Step 1: Push the first half of the queue into a stack
        // After this, queue = [16 17 18 19 20], stack (top to bottom) = [15 14 13 12 11]
        for (int i = 0; i < halfSize; i++) {
            st.push(q.front());
            q.pop();
        }

        // Step 2: Enqueue the stack contents back into the queue
        // Now queue = [16 17 18 19 20 15 14 13 12 11]
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }

        // Step 3: Move the first half elements (which were original second half)
        // to the back again so that stack elements come to the front
        // Now queue = [15 14 13 12 11 16 17 18 19 20]
        for (int i = 0; i < halfSize; i++) {
            q.push(q.front());
            q.pop();
        }

        // Step 4: Push the first half into stack again
        // stack = [11 12 13 14 15], queue front = 16 17 18 19 20
        for (int i = 0; i < halfSize; i++) {
            st.push(q.front());
            q.pop();
        }

        // Step 5: Interleave the elements of stack and queue
        // Final queue = [11 16 12 17 13 18 14 19 15 20]
        while (!st.empty()) {
            q.push(st.top());
            st.pop();

            q.push(q.front());
            q.pop();
        }

        return q;
    }
};
