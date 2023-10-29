class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> temp;
        for(int i = 1; i <= n; i++){
            if(n % i == 0) temp.push_back(i);
        }
        if(k > temp.size()) return -1;
        return temp[k-1];
    }
};