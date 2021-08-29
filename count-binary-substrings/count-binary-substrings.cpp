class Solution {
public:
    int countBinarySubstrings(string s) {
        
        
        int prev=0;
        int cur=1;
        int sum=0;
        
        for(int i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
            {
                cur++;
            }
            else
            {
                sum+=min(prev,cur);
                prev=cur;
                cur=1;
            }
        }
        sum+=min(prev,cur);
        
        return sum;
        
    }
};