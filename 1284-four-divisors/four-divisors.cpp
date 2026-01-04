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
        sort(nums.begin(), nums.end());
        long long int totalSum = 0;
        int prevSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(i != 0 && nums[i] == nums[i - 1]) totalSum += prevSum;
            else{
                prevSum = divisor(nums[i]);
                totalSum += prevSum;  
            }
        }
        return int(totalSum);
    }
};