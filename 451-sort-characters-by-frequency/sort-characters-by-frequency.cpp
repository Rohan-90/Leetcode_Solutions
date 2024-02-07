class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        string ans = "";
        multimap<int,char> hmp;
        for(auto it : s) mp[it]++;
        for(auto it : mp) hmp.insert({it.second, it.first});    
        
        for(auto it = hmp.rbegin(); it != hmp.rend(); it++){
            ans += string(it->first, it->second);
        }
        return ans;
    }
};