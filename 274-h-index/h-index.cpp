class Solution {
public:
    int hIndex(vector<int>& citations) {
       int num = 0;
       sort(citations.begin(), citations.end());
       for(int i = 0; i < citations.size(); i++){
            if(citations[i] >= (citations.size() - i)){
                if(citations.size() - i > num) num = citations.size() - i;
            }
       }
       return num;
    }
};