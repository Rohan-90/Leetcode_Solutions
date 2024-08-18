class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> arr(1692, 0);
        arr[1] = 1;
        int a = 1, b = 1, c = 1;
        for(int i = 2; i <= n; i++) {
            int n1 = arr[a] * 2;
            int n2 = arr[b] * 3;
            int n3 = arr[c] * 5;

            int mini = min({n1,n2,n3});
            arr[i] = mini;
            if(mini == n1) a++;
            if(mini == n2) b++;
            if(mini == n3) c++;

        }
        return arr[n];
    }
};