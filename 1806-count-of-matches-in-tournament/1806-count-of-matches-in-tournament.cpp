class Solution {
public:  
    int numberOfMatches(int n) {
        int sum=0;
        while(n!=1)
        {
            if(n%2==0)
            {
                n=n/2;
                sum=sum+n;
            }
            else
            {
                sum=sum+(n-1)/2;
                n=(n-1)/2+1;
            }
        }
        return sum;
    }
};