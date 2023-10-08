class Solution {
public:
    int minProcessingTime(vector<int>& pt, vector<int>& tasks) {
        sort(pt.begin(),pt.end());
        sort(tasks.begin(),tasks.end());
        int maxi=0;
        int n=tasks.size()-1;
        for(int i=0;i<pt.size();i++)
        {
            int c=4;
            while(c--)
                maxi=max(maxi,pt[i]+tasks[n--]);
        }
        return maxi;
    }
};