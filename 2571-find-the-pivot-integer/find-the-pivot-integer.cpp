class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;
        unordered_map<int,int> m;
        int sum = 0;
        for(int i = 1; i < n; i++){
            sum += i;
            m[sum] = i;
        }
        int j = n;
        int sSum = 0;
        while(j > 0){
            sSum += j;
            if(m.find(sSum) != m.end() && (m[sSum] == j)) return m[sSum];
            j--;
        }
        return -1;
    }
};