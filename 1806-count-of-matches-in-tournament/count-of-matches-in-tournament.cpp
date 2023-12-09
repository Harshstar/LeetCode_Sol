class Solution {
public:
    int numberOfMatches(int n) {
        int sum=0;
        while(n>1)
        {
            int d=n/2;
            sum+=d;
            n=n-d;
        }
        return sum;
    }
};