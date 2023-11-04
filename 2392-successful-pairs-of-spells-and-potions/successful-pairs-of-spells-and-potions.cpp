class Solution {
public:
    int binarySearch(vector<int>& potions, int val, long long success){
        int low = 0;
        int high = potions.size() - 1;
        int count = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(potions[mid] * (long long)val >= success){
                high = mid -1;
                count = potions.size() - mid;
            }
            else if(potions[mid] * (long long)val < success) low = mid +1;
        }
        return count;
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(), potions.end());
        for(int i = 0; i < spells.size(); i++){
            int res = binarySearch(potions, spells[i], success);
            ans.push_back(res);
        }
        return ans;
    }
};