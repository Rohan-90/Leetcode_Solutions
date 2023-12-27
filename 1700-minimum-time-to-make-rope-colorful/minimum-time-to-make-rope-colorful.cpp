class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0;
        int prev = 0;
        for(int i = 1; i < colors.size(); i++){
            if(colors[i-1] != colors[i]) prev = i;
            else{
                if(neededTime[prev] < neededTime[i]){
                    ans += neededTime[prev];
                    prev = i;
                }
                else ans += neededTime[i];
            }
        }
        return ans;
    }
};