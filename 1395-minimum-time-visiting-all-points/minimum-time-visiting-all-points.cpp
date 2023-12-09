class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int maxi=0;
        for(int i=0;i<points.size()-1;i++)
        {
            int x=points[i][0];
            int y=points[i][1];
            int a=points[i+1][0];
            int b=points[i+1][1];
            maxi=maxi+max(abs(x-a),abs(y-b));
        }
        return maxi;
    }
};