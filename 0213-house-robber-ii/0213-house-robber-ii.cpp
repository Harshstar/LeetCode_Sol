class Solution {
public:
    int sol(vector<vector<int>> &temp,int s,int e,vector<int> &nums,int n){
    if(s>e || s<0 || e>=n){
        return 0;
    }
    else if(temp[s][e]!=-1){
        return temp[s][e];
    }
    else if(s==e){
        temp[s][e]=nums[s];
        return temp[s][e];
    }
    else{
        int rt=0;
        for(int i=s;i<=e;i++){
            rt=max(rt,nums[i]+sol(temp,s,i-2,nums,n)+sol(temp,i+2,e,nums,n));
        }
        temp[s][e]=rt;
        return rt;
    }
    return temp[s][e];
}
int rob(vector<int>& nums) {
    int n=nums.size();
     int ans=0;
    vector<vector<int>> temp(n,vector<int>(n,-1));
    ans=max(ans,nums[0]+sol(temp,2,n-2,nums,n));
    ans=max(ans,nums[n-1]+sol(temp,1,n-3,nums,n));
    ans=max(ans,sol(temp,1,n-2,nums,n));
    return ans;
}
};