class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        
        int i=0;
        for(auto it:words)
        {
            if(i==s.size())
            {
                break;
            }
            if(s.substr(i,it.size())==it)
            {
                i+=it.size();
            }
            else
            {
                return false;
            }
            
        }
        if(i<s.size())
        {
            return false;
        }
        return true;
    }
};