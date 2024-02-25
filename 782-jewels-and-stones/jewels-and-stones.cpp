class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for(char it : jewels) mp[it]++;
        int count = 0;
        for(int i = 0; i < stones.size(); i++){
            if(mp.find(stones[i]) != mp.end()) count++;
        }
        return count;
    }
};