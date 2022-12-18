class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        if(n==2) return 1;        
        set<double> s;        
        sort(nums.begin(),nums.end());
        int i=0;
        int j=n-1;           
        while(i<j)
        {
            double avg = (nums[i++]+nums[j--])/2.0;
            s.insert(avg);
        }
        return s.size();
    }
};