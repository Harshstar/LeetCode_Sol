//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        
        int max=0;
        string name="";
        for(auto itr=mp.begin(); itr!=mp.end();itr++)
        {
            string key=itr->first;
            int val=itr->second;
            if(val>max){
                max=val;name=key;
                
            }
            else if(val==max)
            {
                if(key<name)
                    name=key;
            }
        }
        vector<string>ans;
        ans.push_back(name);
        string temp=to_string(max);
        ans.push_back(temp);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends