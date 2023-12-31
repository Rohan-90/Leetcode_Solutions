class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size() == 1) return arr[0];
        int maxCount = 0;
        int element = -1;
        int count = 1;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i - 1]) count++;
            else count  = 1;
            if(count > maxCount){
                maxCount = count;
                element = arr[i]; 
            }
            
        }
        return element;
    }
};