class Solution {
public:
    string addStrings(string num1, string num2) {
        int i;
        if(num1.size()>num2.size())
            return addStrings(num2,num1);
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        string sum;
        int carry=0,digit;
        for(i=0;i<num1.size();i++)
        {
            digit=((num1[i]-'0')+(num2[i]-'0') + carry)%10;
            carry=(num1[i]-'0'+num2[i]-'0'+carry)/10;
            sum+=to_string(digit);
        }
        for(int d=i;d<num2.size();d++)
        {
    	    digit=(num2[d]-'0'+carry)%10;
    	    carry =(num2[d]-'0'+carry)/10;
    	    sum+=to_string(digit);
        }
        if(carry==1)
            sum+="1";
        reverse(sum.begin(), sum.end());
        return sum;
    }
};