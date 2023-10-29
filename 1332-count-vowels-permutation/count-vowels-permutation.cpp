class Solution {
public:
    int countVowelPermutation(int n) {
        if(n == 1) return 5;
        int mod = 1000000007;
        long long a = 1, e = 1, i = 1, o = 1, u = 1;
        for(int j = 2; j <= n; j++){
            long long new_a = (e + i + u) % mod; 
            long long new_e = (a + i) % mod;
            long long new_i = (e + o) % mod;
            long long new_o = i;
            long long new_u = (i + o) % mod;
        
            a = new_a;
            e = new_e;
            i = new_i;
            o = new_o;
            u = new_u;
        }
        long long ans = (a + e + i + o + u) % mod;
        return (int)ans;
    }
};