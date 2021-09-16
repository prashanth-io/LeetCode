class Solution {
public:
    int longestPalindrome(string s) {
        
        if(s.size()==1)
        {
            return 1;
        }
        unordered_map<char,int>map;
        
        int ans=0;
        bool flag=false;
        
        for(auto x:s)
        {
            map[x]++;
        }
        for(auto x:map)
        {
            if(x.second % 2==0)
            {
                ans+=x.second;
            }
            else
            {
                ans+=x.second-1;
                flag=true;
            }
        }
        if(flag)
        {
            ans++;
        }
        return ans;
        
    }
};