class Solution {
public:
    int largestInteger(int num) {
        vector<char>even;
        vector<char>odd;
        string nums=to_string(num);
        string temp=to_string(num);
        for(int i=0;i<nums.size();i++)
        { 
            if(nums[i]%2==0){
                even.push_back(nums[i]);
                }
            else
                odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(even.begin(),even.end());
        reverse(odd.begin(),odd.end());
        int r=0,k=0;
        for(int i=0;i<temp.size();i++)
        {
            if(temp[i]%2==0 ){
                nums[i]=even[r];
                r++;
            }
            else{
                nums[i]=odd[k];
                k++;
            }
        }
        return stoi(nums);
    }
};