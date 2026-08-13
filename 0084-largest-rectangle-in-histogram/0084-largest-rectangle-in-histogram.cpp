class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        vector<int> Right(n);
        vector<int> Left(n);
        stack<int> st;

        // Next smallest element at right find karo
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                Right[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        // Stack ko pura khali karo
        while (!st.empty()) {
            Right[st.top()] = n;
            st.pop();
        }

        // Next smallest element at left find karo

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                Left[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        // Stack ko pura empty karo
        while (!st.empty()) {
            Left[st.top()] = -1;
            st.pop();
        }

        // Ab answer store karo
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = max(ans, heights[i] * (Right[i] - Left[i] - 1));
        }

        return ans;
    }
};