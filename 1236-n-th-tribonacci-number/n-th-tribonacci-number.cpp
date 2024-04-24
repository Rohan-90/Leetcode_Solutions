class Solution {
public:
    int tribonacci(int n) {
        int a = 0, b = 1, ans = 0, c = 1;
        if(n == 0) return 0;
        if(n == 2 || n == 1) return 1;
        for(int i = 3; i <= n; i++){
            ans = a + b  + c;
            a = b;
            b = c;
            c = ans; 
        }
        return ans;
    }
};