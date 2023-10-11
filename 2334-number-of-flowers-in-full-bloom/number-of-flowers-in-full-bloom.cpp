class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        int n = flowers.size();
        vector<int> startTime(n,-1);
        vector<int> endTime(n,-1);
        vector<int> ans;
        for(int i = 0; i < n; i++){
            startTime.push_back(flowers[i][0]);
            endTime.push_back(flowers[i][1]);
        } 
        sort(startTime.begin(),startTime.end());
        sort(endTime.begin(), endTime.end());
        int size = people.size();
        for(int i = 0; i < size; i++){
            int upperbound = upper_bound(startTime.begin(),startTime.end(),people[i]) - startTime.begin();
            int lowerbound = lower_bound(endTime.begin(), endTime.end(), people[i]) - endTime.begin();
            ans.push_back(upperbound - lowerbound);
        }
        return ans;
    }
};