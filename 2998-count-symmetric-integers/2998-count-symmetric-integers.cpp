class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++)
        {
            int sum1=0,sum2=0,c=0;
            int temp=i;
            while(temp>0)
            {
                c++;
                temp=temp/10;
            }
            if(c%2!=0)
                continue;
            temp=i;
            int div=c/2;
            while(temp>0)
            {
                int d=temp%10;
                if(div>0)
                    sum1+=d;
                else
                    sum2+=d;
                div--;
                temp/=10;
            }
            if(sum1==sum2)
                count++;
        }
        return count;
    }
};