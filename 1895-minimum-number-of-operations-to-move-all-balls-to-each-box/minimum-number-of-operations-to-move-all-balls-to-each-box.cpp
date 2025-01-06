class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size(),0);
        // vector<int> ones;
        // for(int i = 0; i < boxes.size(); i++) {
        //     if(boxes[i] == '1') ones.push_back(i);
        // }
        // for(int i = 0; i < boxes.size(); i++) {
        //     int num = 0;
        //     for(auto it : ones) {
        //         num += abs(it - i);
        //     }
        //     ans[i] = num;
        // }
        // return ans;
        int value = 0, cumSum = 0;
        for(int i = 0; i < boxes.size(); i++) {
            ans[i] = cumSum;
            if(boxes[i] == '0') value += 0;
            else value += 1;
            cumSum += value;
        }
        value = 0;
        cumSum = 0;
        for(int i = boxes.size() - 1; i >= 0; i--) {
            ans[i] += cumSum;
            if(boxes[i] == '0') value += 0;
            else value += 1;
            cumSum += value;
        }
        return ans;
    }
};