class Solution {
public:
/*
    bool div(int n)
    {
        if(n==1)
            return false;
        else
        {
            for(int i=1;i<n;i++)
            {
                if(n%i==0)
                {
                    if(div(n-i)==false)return true;
                }
            }
        }
        return false;
    }

    bool divisorGame(int n) {
        return div(n);
    }*/

    bool divisorGame(int n) {
        if(n%2==0)
        return true;
        return false;
    }
};