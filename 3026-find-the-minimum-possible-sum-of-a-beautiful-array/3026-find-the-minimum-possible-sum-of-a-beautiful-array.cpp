class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        if(n==0)
            return 0;
        long long sum=0;
        set<int>s;
        for(int i=1;;i++)
        {
            if(s.size()==n)
                break;
            if(i>target)
            {
                s.insert(i);
                sum=sum+i;
            }  
            else if(s.find(target-i)==s.end() && target>=i)
            {
                s.insert(i);
                sum=sum+i;
            }
        }
        return sum;
    }
};