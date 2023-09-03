class Solution {
public:
    int minimumOperations(string nums) {
        int ans=nums.size();
        int n=nums.size();
        for(int i=n-1;i>=0;i--) 
        {
            for (int j=i-1;j>=0;j--) 
            {
                int num=(nums[i]-'0') + (nums[j]-'0')*10;
                if(num%25 == 0) 
                {
                    ans=min(ans,n-j-2);
                }
            }
            if(nums[i]=='0') 
                ans=min(ans,n-1);
        }
        return ans;
    }
};