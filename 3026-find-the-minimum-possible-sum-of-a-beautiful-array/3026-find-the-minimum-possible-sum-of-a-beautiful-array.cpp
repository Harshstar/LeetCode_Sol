class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        if(n==0)
            return 0;
        long long sum=0;
        set<int>s;
        s.insert(1);
        for(int i=2;;i++)
        {
            if(s.size()==n)
                break;
            int temp=target-i;
            if(s.find(temp)==s.end() && target>=i)
            {
                s.insert(i);
                sum=sum+i;
            }
            if(s.size()==n)
                break;
            else if(i>target)
            {
                s.insert(i);
                sum=sum+i;
            }  
        }
        return sum+1;
    }
};