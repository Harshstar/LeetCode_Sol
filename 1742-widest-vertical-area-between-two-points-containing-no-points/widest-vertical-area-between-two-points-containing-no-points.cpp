class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>temp;
        for(int i=0;i<points.size();i++)
            temp.push_back(points[i][0]);
        sort(temp.begin(),temp.end());
        int maxi=0;
        for(int i=0;i<temp.size()-1;i++)
            maxi=max(maxi,temp[i+1]-temp[i]);
        return maxi;
    }
};