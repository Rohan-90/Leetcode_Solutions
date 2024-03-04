class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int count = 0, score = 0, left = 0, right = tokens.size() - 1;
        while(right >= left){
            if(tokens[left] <= power){
                score += 1;
                power -= tokens[left];
                count = max(count, score);
                left++;
            }
            else if(score >= 1){
                power += tokens[right];
                score -= 1; 
                right--;
            }
            else break;
        } 
        return count;
    }
};