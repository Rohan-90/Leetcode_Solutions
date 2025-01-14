class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int ans = 0;
        vector<int> res(A.size());
        unordered_map<int,int> store;
        for(int i = 0; i < A.size(); i++) {
            store[A[i]]++;
            if(store[A[i]] == 2) ans += 1;
            store[B[i]]++;
            if(store[B[i]] == 2) ans += 1;
            res[i] = ans; 
        }
        return res;
    }
};