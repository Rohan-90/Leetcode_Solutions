class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
      /*  if(n <= k){
            reverse(s.begin(),s.end());
            return s;
        } 
        int start = 0;
        int end = 0;
        while(end < n){
            while(end < k && end < n) end++;
            if(end == k) reverse(s.begin()+ start, s.begin() + end);
            end += k;
            start = end;
            while(end - start < k) end++;
            if(end - start == k && end < n) reverse(s.begin()+ start, s.begin() + end);
        }
        return s;*/
        for (int start = 0; start < n; start += 2 * k) {
        int end = min(start + k, n);
        reverse(s.begin() + start, s.begin() + end);
        }
    
        return s;
    }
};