class Solution {
public:
    char findTheDifference(string s, string t) {
        
        map<char,int>m;
        
        map<char,int>::iterator it;
        
        for(char c:s)
        {
             it=m.find(c);
            if(it!=m.end())
            {
                it->second++;
            }
            else
            {
                m.insert({c,1});
            }
            
            
        }
        for(char d:t)
        {
            it=m.find(d);
            if(it!=m.end())
            {
                it->second--;
            }
            else
            {
                return d;
            }
        }
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second!=0)
            {
                return it->first;
            }
        }
        return 'a';
        
    }
};