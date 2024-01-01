class Solution {
public:
    int hIndex(vector<int>& citations) {
       int num = 0;
       sort(citations.begin(), citations.end());
       for(int i = 0; i < citations.size(); i++){
            if(citations[i] >= (citations.size() - i)){
                int diff = citations.size() - i;
                num = max(diff, num);
            }
       }
       return num;
    }
};