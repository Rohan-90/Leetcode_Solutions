class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> city;
        for(auto it : paths) city.insert(it[0]);
        for(auto it : paths){
            if(city.find(it[1]) == city.end())
            return it[1];
        }
        return "";
    }
};