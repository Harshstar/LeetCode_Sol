class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int>arr(n+1);
        if(n==0 || n==1)
            return n;
        arr[0]=0;
        arr[1]=1;

        int maxi=1;
        for(int i=2;i<=n;i++)
        {
            if(i%2==0)
                arr[i]=arr[i/2];
            else
                arr[i]=arr[i/2]+arr[i/2+1];
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};