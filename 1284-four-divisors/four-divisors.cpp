class Solution {
public:
    int divisor(int n) {
        int count = 0;
        long long int sum = 0;
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                if(i == (n/i))  {
                    sum += i;
                    count += 1; 
                }
                else {
                    sum += i + (n / i);
                    count += 2;
                }
            }
        }
        if(count == 4) {
            return sum;
        }
        return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        long long int totalSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            totalSum += divisor(nums[i]);
        }
        return int(totalSum);
    }
};