class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        vector<int> ans;
        for(auto it : nums) m[it]++;
        for(auto it : m){
            if(it.second <= 2){
                int count = it.second;
                while(count--){
                    ans.push_back(it.first);
                }
            }
            else if(it.second > 2){
                int count = 2;
                while(count){
                    ans.push_back(it.first);
                    count--;
                }
            }
        }
 
        for(int i = 0; i <ans.size(); i++){
            nums[i] = ans[i];
        }
        return ans.size();
    }
};