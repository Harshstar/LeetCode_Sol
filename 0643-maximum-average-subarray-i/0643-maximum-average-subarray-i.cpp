class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        int start=0;
        int end=k;
        int maxi=sum;
        while(end<nums.size())
        {
            sum=sum-nums[start];
            start++;
            sum=sum+nums[end];
            end++;
            maxi=max(maxi,sum);
        }
        return (double)maxi/k;
    }
};