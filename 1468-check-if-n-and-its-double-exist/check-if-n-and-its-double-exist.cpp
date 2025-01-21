class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;
        int count = 0;
        for(auto it : arr) if(it == 0) count++;
        if(count >= 2) return true;
        for(auto it : arr) {
            if(it % 2 == 0 && it != 0) mp[it/2]++;
        }
        for(auto it : arr) {
            if(mp.find(it) != mp.end()) return true;
        }
        return false;
    }
};