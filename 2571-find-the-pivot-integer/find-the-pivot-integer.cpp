class Solution {
public:
    int pivotInteger(int n) {
        double x = sqrt(n * (n + 1) / 2.0);
        if (fmod(x, 1.0) != 0) return -1;
        
        return static_cast<int>(x);
        
        // if(n == 1) return 1;
        // unordered_map<int,int> m;
        // int sum = 0;
        // for(int i = 1; i < n; i++){
        //     sum += i;
        //     m[sum] = i;
        // }
        // int j = n;
        // int sSum = 0;
        // while(j > 0){
        //     sSum += j;
        //     if(m.find(sSum) != m.end() && (m[sSum] == j)) return m[sSum];
        //     j--;
        // }
        // return -1;
    }
};