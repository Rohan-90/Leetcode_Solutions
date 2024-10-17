class Solution {
public:
    // vector<int> nextSmaller(vector<int>& arr){
    //     vector<int> ans(arr.size());
    //     stack<int> st;
    //     st.push(-1);
    //     for(int i = arr.size() - 1; i >= 0 ; i--){
    //         while( st.top() != -1 && arr[st.top()] >= arr[i]) st.pop();
    //         ans[i] = st.top();
    //         st.push(i);
    //     }
    //     return ans;
    // }
    // vector<int> prevSmaller(vector<int>& arr){
    //     vector<int> ans(arr.size());
    //     stack<int> st;
    //     st.push(-1);
    //     for(int i = 0; i < arr.size() ; i++){
    //         while( st.top() != -1 && arr[st.top()] >= arr[i]) st.pop();
    //         ans[i] = st.top();
    //         st.push(i);
    //     }
    //     return ans;
    // }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;

        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int width;
                if (st.empty()) {
                    width = i;
                } else {
                    width = i - st.top() - 1;
                }
                maxArea = max(maxArea, height * width);
            }
            st.push(i);
        }

        return maxArea;
    }
};