class Solution {
public:
    bool isHappy(int n) {
        
        
        if(n==1 || n==7)
        {
            return true;
        }
        if(n>1 && n<=9)
        {
            return false;
        }
        int num=0;
        while(n)
            
        {
            num+=((n%10)*(n%10));
            n=n/10;
        }
        return isHappy(num);
        
    }
};