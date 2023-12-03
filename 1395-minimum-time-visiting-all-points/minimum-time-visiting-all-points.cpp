class Solution {
public:
    int solve(vector<int>& from, vector<int>& desti){
        int xAxis = abs(from[0] - desti[0]);
        int yAxis = abs(from[1] - desti[1]);
        return max(xAxis, yAxis);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time  = 0;
        for(int i = 1; i < points.size(); i++){
            time += solve(points[i-1], points[i]); 
        }     
        return time;
    }
};