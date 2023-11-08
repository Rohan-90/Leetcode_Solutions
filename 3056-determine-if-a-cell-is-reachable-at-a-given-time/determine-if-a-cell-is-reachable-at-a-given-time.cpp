class Solution {
public:
    int recursive(int sx, int sy, int fx, int fy, int t){
        int xdist = abs(sx - fx);
        int ydist = abs(sy - fy);
        return max(xdist, ydist); 
    }
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int dis = recursive(sx, sy, fx, fy, t);
        if (dis > 0 && dis <= t) return true;
        else if (dis <= 0 && t != 1) return true;
        return false;
    } 
};