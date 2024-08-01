class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++) {
            string age = details[i].substr(11,2);
            int conversion = stoi(age);
            if(conversion > 60) count++;
        }
        return count;
    }
};