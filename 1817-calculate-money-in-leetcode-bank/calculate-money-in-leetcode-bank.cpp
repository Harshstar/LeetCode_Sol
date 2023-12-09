class Solution {
public:
    int totalMoney(int n) {
        int sum=0,temp=1;
        for(int i=1;i<=n;i++)
        {
            sum=sum+temp;
            temp++;
            if(i%7==0)
            {
                temp=i/7 + 1;
            }
        }
        return sum;    
    }
};