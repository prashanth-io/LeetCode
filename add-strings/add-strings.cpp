class Solution {
public:
    string addStrings(string num1, string num2) {
        
        
        string ans;
        int n=num1.size();
        int m=num2.size();
        
        int carry=0;
        int i=n-1;
        int j=m-1;
        
        while(i>=0 && j>=0)
        {
            int x=(num1[i]-'0')+(num2[j]-'0')+carry;
            ans=ans+to_string(x%10);
            carry=x/10;
            i--;
            j--;
        }
        
        if(i>=0)
        {
            while(i>=0)
            {
                int y=(num1[i]-'0')+carry;
                ans=ans+to_string(y%10);
                carry=y/10;
                i--;
            }
        }
         if(j>=0)
        {
            while(j>=0)
            {
                int z=(num2[j]-'0')+carry;
                ans=ans+to_string(z%10);
                carry=z/10;
                j--;
            }
        }
        
        if(carry>0)
        {
            ans=ans+to_string(carry);
        }
        
        reverse(ans.begin(),ans.end());
        return ans  ;
        
      
                                                 
        
    }
};