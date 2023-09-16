class AuthenticationManager {
public:
    unordered_map<string, int>mp;
    int time= 0;
    AuthenticationManager(int timeToLive) {
        time= timeToLive;
    }
    void generate(string tokenId, int currentTime) {
        mp[tokenId]= currentTime + time;
    }
    
    void renew(string tokenId, int currentTime) {
        auto it= mp.find(tokenId);
        if(it==mp.end())
        return;
        else{
        if(mp[tokenId]>currentTime) 
        {
            mp[tokenId]= currentTime + time;  
        }
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int total=0;
        for(auto x:mp) 
        {
            if(x.second>currentTime)
            total++;
        }
        return total;
    }
};
