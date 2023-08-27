class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        if(n==0)
            return 0;
        long long sum=0;
        set<int>s;
        for(int i=1;s.size()<n;i++)
        {
            if(s.find(target-i)==s.end() )
            {
                s.insert(i);
                sum=sum+i;
            }
        }
        return sum;
    }
};