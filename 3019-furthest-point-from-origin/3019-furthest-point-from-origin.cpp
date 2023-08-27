class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int ans;
        unordered_map<int,int>mp;
        for(int i=0;i<moves.size();i++)
            mp[moves[i]]++;
        int maxi1=0,maxi2=0,maxi3=0;
        for(auto x:mp)
        {
            if(x.first=='_')
                maxi1=x.second;
            if(x.first=='L')
                maxi2=x.second;
            if(x.first=='R')
                maxi3=x.second;
        }
        if(maxi2>=maxi3)
            ans=(maxi1+maxi2)-maxi3;
        else
            ans=(maxi1+maxi3)-maxi2;
        return ans;
    }
};