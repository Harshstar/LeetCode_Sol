class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string nums=to_string(num);
        int count=0;
        for(int i=0;i<=nums.size()-k;i++)
        {
            int temp=stoi(nums.substr(i,k));
            if(temp!=0 && num%temp==0)
                count++;
        }
        return count;
    }
};