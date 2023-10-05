class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
       map<int,int> mp;
        for(auto it : nums) if(it % 2 == 0) mp[it]++;
        int maxCount = 0;
        int maxEven = -1;
        for(auto it : mp){
           if(it.second > maxCount){
                maxCount = it.second;
                maxEven = it.first;
           }
        } 
       return maxEven;
    }
};