class Solution {
public:
    int addDigits(int num) {
        
        while(num > 9 )
        {
            int temp=num,sum=0;
            while(temp>0)
            {
                int d;
                d=temp%10;
                sum=sum+d;
                temp=temp/10;
            }
            num=sum;
        }
        return num;
        
    }
};