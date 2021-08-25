class Solution {
public:
    bool judgeSquareSum(int c) {
     
        unordered_map<int,int>set;
       for(long i=0;i*i<=c;i++)
       {
           long x=i*i;
           set[x]=1;
           
           if(set.find(c-i*i)!=set.end())
           {
               return true;
           }
       }
        return false;
    }
};