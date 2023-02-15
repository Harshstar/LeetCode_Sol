class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int > arr;
        int i;
        double res;
        for(i=0;i<nums1.size();i++)
        {
            arr.push_back(nums1[i]);
        }
        for(i=0;i<nums2.size();i++)
        {
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(),arr.end());
        int n= arr.size()-1;
        if(n%2==0)
        {
            res=arr[n/2.0];
        }
        else
        {
            res=(arr[n/2]+arr[n/2+1])/2.0;
        }
        return res;
    }
};
