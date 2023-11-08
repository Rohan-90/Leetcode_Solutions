class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        for(int i = 0; i < sentence.size(); i++){
            int ch = sentence[i] - 'a';
            arr[ch]++;
        }
        for(int i = 0; i < 26; i++){
            if(arr[i] < 1) return false;
        }
        return true;
    }
};