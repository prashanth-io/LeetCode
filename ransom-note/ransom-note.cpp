class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      int r[27]={0};
        int m[27]={0};
        for(int i=0;i<ransomNote.length();i++)
        {
             r[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++)
        {
             m[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(r[i]<=m[i]) continue;
            else  return false;
        }
        return true;
        
    }
};