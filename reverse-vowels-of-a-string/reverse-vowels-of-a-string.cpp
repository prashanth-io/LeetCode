class Solution {
public:
    string reverseVowels(string s) {
        stack<char>set;
        string x;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'||s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'||s[i]=='U' )
            {
                set.push(s[i]);
            }
            
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'||s[i]=='u'||s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'||s[i]=='U')
            {
                x+=set.top();
                set.pop();
            }
            else
            {
                
            
             x+=s[i]; 
            }
        }
        return x;
        
    }
};