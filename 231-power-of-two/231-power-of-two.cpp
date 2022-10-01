class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag;
        if(n==0)
            flag=false;
        else if(n==1)
            flag=true;
        else
        {
            if(ceil(log2(n))==floor(log2(n)))
                flag=true;
            else
                flag=false;
        }
        return flag;
    }
};