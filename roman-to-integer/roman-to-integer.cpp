class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int>mp{
            
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        
        int i=0;
        int num=0;
        int n=s.size();
        while(i<n)
        {
            if(mp[s[i]]<mp[s[i+1]])
            {
                num+=mp[s[i+1]]-mp[s[i]];
                i+=2;
            }
            else
            {
                num+=mp[s[i]];
                i++;
            }
        }
        return num;
        
    }
};