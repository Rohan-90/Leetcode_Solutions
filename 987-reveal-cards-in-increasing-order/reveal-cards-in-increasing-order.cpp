class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        vector<int> ans(deck.size(),0);
        int i = 0, j = 0;
        sort(deck.begin(), deck.end());
        bool flag = true;
        while(i < deck.size()){
            if(ans[j] == 0){
                if(flag == true){
                    ans[j] = deck[i];
                    i++;
                }
                flag = !flag;
            }
            j = (j + 1) % deck.size();
        }
        return ans;
    }
};