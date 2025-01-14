class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> res(A.size());
        int ans = 0;
        unordered_set<int> store;
        for(int i = 0; i < A.size(); i++) {
            if(A[i] == B[i]) {
                ans += 1;
                store.insert(A[i]);
            }
            else {
                if(store.find(A[i]) != store.end()) ans++;
                if(store.find(B[i]) != store.end()) ans++;
                store.insert(A[i]);
                store.insert(B[i]);
            }
            res[i] = ans; 
        }
        return res;
    }
};