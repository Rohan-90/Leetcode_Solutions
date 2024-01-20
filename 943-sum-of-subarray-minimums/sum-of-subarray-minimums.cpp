class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
       /* int sum = 0;
        int ans = 0;
        int mod = 1e9 + 7;
        int index = 0;
        while(index < arr.size()){
            int mini = INT_MAX;
            int it = index;
            while(it < arr.size()){
                mini = min(mini, min(arr[index], arr[it])) % mod;
                sum = (sum + mini) % mod;
                it++;
            }
            index++;
        }
        for(int i = 0 ; i < arr.size(); i++){
            int mini = INT_MAX;
            for(int j = i; j < arr.size(); j++){
                mini = min(mini, min(arr[i], arr[j])) % mod;
                sum = (sum + mini) % mod;
            }
        }
        return sum;*/
         const int mod = 1e9 + 7;
        int n = arr.size();
        std::stack<int> st;
        int result = 0;

        for (int i = 0; i < n; ++i) {
            while (!st.empty() && arr[i] < arr[st.top()]) {
                int j = st.top();
                st.pop();
                int left = (st.empty() ? j + 1 : j - st.top()) % mod;
                int right = (i - j) % mod;
                result = (result + (long long)arr[j] * left * right) % mod;
            }

            st.push(i);
        }

        while (!st.empty()) {
            int j = st.top();
            st.pop();
            int left = (st.empty() ? j + 1 : j - st.top()) % mod;
            int right = (n - j) % mod;
            result = (result + (long long)arr[j] * left * right) % mod;
        }

        return result;
    }
};