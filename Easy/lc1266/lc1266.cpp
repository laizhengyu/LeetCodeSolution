class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int r=0;
        for (int i=1;i<points.size();i++)
        {
            r=max(abs(points[i][0]-points[i-1][0]),abs(points[i][1]-points[i-1][1]))+r;
        }
        return r;
    }
};