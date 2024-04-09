class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int sec = 0;
        for(int i = 0; i < tickets.size(); i++){
            if(i <= k) sec += min(tickets[k], tickets[i]);
            else sec += min(tickets[k] - 1, tickets[i]);
        }
        return sec;
    }
};