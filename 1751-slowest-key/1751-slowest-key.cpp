class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string s) {
        int n=releaseTimes.size();
        int d=releaseTimes[0];
        char maxi=s[0];
        for(int i=1;i<n;i++)
        {
            int temp=releaseTimes[i]-releaseTimes[i-1];
            if(temp==d)
                maxi=max(maxi,s[i]);
            
            if(temp>d){
                maxi=s[i];
                d=temp;
            }
        }
        return maxi;
    }
};