class Solution {
public:
    void solve(int s, int e, string& word){
        while(e >= s){
            swap(word[s], word[e]);
            s++;
            e--;
        }
    }
    string reversePrefix(string word, char ch) {
        int till = -1;
        for(int i = 0; i < word.size(); i++){
            if(word[i] == ch) {
                till = i;
                break;
            }
        }
        solve(0,till, word);
        return word;
    }
};