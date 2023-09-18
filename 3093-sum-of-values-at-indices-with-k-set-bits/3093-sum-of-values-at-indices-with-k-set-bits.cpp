class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=i;
            int c=0;
            while(temp>0)
            {
                if(temp%2==1)
                    c++;
                temp/=2;
            }
            if(c==k)
                sum=sum+nums[i];
        }
        return sum;
    }
};