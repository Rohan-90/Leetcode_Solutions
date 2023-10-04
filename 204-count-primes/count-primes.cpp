class Solution {
public:
   /* bool isPrime(int a){
       
        if(a <= 1) return false;
        for(int i = 2; i <= sqrt(a); i++){
            if(a % i == 0) return false;
        }
        return true;
    }*/
    int countPrimes(int n) {
        if(n == 0) return 0;
        int count = 0;
        vector<bool> vec(n,true);
        vec[0] == vec[1] == false;
        for(long long i = 2; i < n; i++){
            if(vec[i]){
                count++;
                long long j = i * i;
                while(j < n){
                    vec[j] = false;
                    j += i;
                } 
            }
        }
        return count;

     /*   int count = 0;
        for(int i = 0; i < n; i++){
            if(isPrime(i)) count++;
        }
        return count;*/
    }
};