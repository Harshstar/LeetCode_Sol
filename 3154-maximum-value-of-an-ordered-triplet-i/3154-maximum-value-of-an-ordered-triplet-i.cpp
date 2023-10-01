class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxi=0;
        long long i,j,k,prod;
        for(i=0;i<nums.size();i++)
        {   
            for(j=i+1;j<nums.size();j++)
            {
                for(k=j+1;k<nums.size();k++)
                {
                    prod=(long)(nums[i]-nums[j])*(long)nums[k];
                    if(prod>maxi)
                        maxi=prod;
                }
            }
        }
        return maxi;
    }
};