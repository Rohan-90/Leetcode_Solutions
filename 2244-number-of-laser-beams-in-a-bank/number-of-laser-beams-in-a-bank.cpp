class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int countOne = 0; // no of ones in the row
        int onesInPrevRow = 0; // count of ones in previous row
        for(auto rows : bank){
            for(auto cols : rows){
                if(cols == '1') countOne++;
            }
            if(countOne > 0){
                ans += countOne * onesInPrevRow;
                onesInPrevRow = countOne;
                countOne = 0; 
            }
        }
        return ans;
    }
};