class Solution {
public:
    int sq(int x){
        return x * x;
    } 
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto it : queries){
            int count = 0;
            for(auto tt : points){
                int area = sq(tt[0] - it[0]) + sq(tt[1] - it[1]);
                if(area <= it[2] * it[2]) count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};