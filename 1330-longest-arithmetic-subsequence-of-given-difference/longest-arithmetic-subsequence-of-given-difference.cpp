class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int>mp;
        int maxi=0;
        for(int i=0;i<arr.size();i++)
        {
	        int temp=arr[i]-difference;
	        if(mp.find(temp)==mp.end())
	        {
		        mp[arr[i]]=1;
		        maxi=max(maxi,1);
	        }
	        else
	        {
		        temp=mp[arr[i]-difference]+1;
		        mp[arr[i]]=temp;
		        maxi=max(maxi,temp);
	        }
        }
        return maxi;
    }
};