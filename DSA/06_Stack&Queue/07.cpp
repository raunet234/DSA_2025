//84. Largest Rectangle in Histogram
// it is not fine to array of n size in stack but it is ok to make in heap

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n, 0);   // Nearest smaller to left
        vector<int> right(n, 0);  // Nearest smaller to right
        stack<int> s;

        // Find next smaller to the right
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n : s.top(); // If no smaller, set as n (out of bounds)
            s.push(i);
        }

        // Clear the stack for next use
        while (!s.empty()) {
            s.pop();
        }

        // Find next smaller to the left
        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top(); // If no smaller, set as -1 (before start)
            s.push(i);
        }

        // Calculate max area
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;  // Width between nearest smaller bars
            int currArea = heights[i] * width;
            ans = max(ans, currArea);
        }

        return ans;
    }
};
