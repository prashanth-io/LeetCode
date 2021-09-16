class Solution {
public:
    int reverse(int x) {
        long long int ans=0;
         if(x/10==0) 
         {
             return x;
         }
        int y=0;
    
        while(x!=0)
        {
             y=x%10;
             ans=ans*10+y;
             x=x/10;
        }
        return (ans<INT_MIN || ans>INT_MAX)? 0 :ans ;
        
    }
};