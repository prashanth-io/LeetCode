class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";
        int n=strs.size();
        
        int i=0;
        sort(strs.begin(),strs.end());
        
        while(i < strs[0].size() && i< strs[n-1].size())
        {
            if(strs[0][i]==strs[n-1][i])
            {
                ans+=strs[0][i];
                i++;
            }
            else
            {
                return ans;
            }
        }
        return ans;
        
    }
};