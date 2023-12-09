class Solution {
public:
    string largestGoodInteger(string num) {
        string maxi="";
        for(int i=0;i<num.size();i++)
        {
            string s="";
            if(num[i]==num[i+1] && num[i+1]==num[i+2])
            {
                s+=num[i];
                s+=num[i+1];
                s+=num[i+2];
            }
            maxi=max(maxi,s);
        }
        return maxi;
    }
};