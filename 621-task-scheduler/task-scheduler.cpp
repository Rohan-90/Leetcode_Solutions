class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int arr[26] = {0};
        for(auto ut : tasks) arr[ut - 'A']++;
        sort(arr, arr + 26);
        int num1 = arr[25] - 1;
        int num2 = n * num1;
        for(int i = 24; i >= 0; i--) num2 -= min(num1, arr[i]);
        if(num2 < 0) return tasks.size();
        return tasks.size() + num2;
    }
};