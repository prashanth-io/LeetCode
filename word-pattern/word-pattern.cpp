class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        
        unordered_map<char,string>mp;
        unordered_map<string,int>m;
        
        int count=0,j=0;
        string words;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' '|| i==s.length()-1)
            {
                if(i==s.length()-1)
                
                    words+=s[i];
                
                
                if(mp.find(pattern[j])!=mp.end())
                {
                        if(mp[pattern[j]]!=words)
                        
                            return false;
                        
                        //words.clear();
                }
                else
                
                        mp[pattern[j]]=words;
                        m[words]++;
                        words.clear();
                        j++;
                
                
            }
            else
            
                words+=s[i];
             
        }
        if((m.size()!=mp.size()) || j<pattern.length())
        
            return false;
        
        
        return true;
    }
};