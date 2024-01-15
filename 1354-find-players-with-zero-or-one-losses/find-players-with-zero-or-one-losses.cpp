class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> won;
        map<int,int> lost;
        vector<int> loose;
        for(int i = 0; i < matches.size(); i++){
            won[matches[i][0]]++;
        }
        for(int i = 0; i < matches.size() ; i++){
            lost[matches[i][1]]++;
        }
        for(auto it : lost){
            if(it.second < 2){
                loose.push_back(it.first);
                won.erase(it.first);
                lost.erase(it.first);
            } 
            else if(it.second >= 2){
                lost.erase(it.first);
                won.erase(it.first);
            }
        }
        vector<vector<int>> ans;
        vector<int> res;
        for(auto it : won) res.push_back(it.first);
        ans.push_back(res);
        res.clear();

        ans.push_back(loose);
        return ans;
    }
};