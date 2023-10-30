class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int maxHeight = height[0];
        int maxleft = 0;
        int index = 0;
        for(int i = 1; i < n; i++){
            if(maxHeight < height[i]){
                maxHeight = height[i];
                index = i;
            }
        }
        int water = 0;
        for(int i = 0; i < index; i++){
            if(maxleft > height[i]) water += maxleft - height[i];
            else maxleft = height[i];
        }
        int maxright = 0;
         for(int i = n-1; i > index; i--){
            if(maxright > height[i]) water += maxright - height[i];
            else maxright = height[i];
        }
        return water;
    }
};