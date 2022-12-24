class Solution {
public:
    int numTilings(int n){
        vector<long long>tile(1001, 0);
        tile[1]=1;
        tile[2]=2;
        tile[3]=5;
        for(int i=4;i<=n;i++)
            tile[i]=(2*tile[i-1]+tile[i-3])%1000000007;
        
        return tile[n];
    }
};
