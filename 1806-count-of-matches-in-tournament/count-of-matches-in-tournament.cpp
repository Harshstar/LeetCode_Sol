class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n>1)
        {
            if(n%2!=0)
            {
                int temp=n/2;
                n=n/2+1;
                sum+=temp;
            }
            else
            {
                int temp=n/2;
                n=n/2;
                sum+=temp;
            }
        }
        return sum;
    }
};