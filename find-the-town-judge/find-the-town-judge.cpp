class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        vector<int>output(n+1,0);   //if 4 it start and end with 0 1 2 3 so we put 4+1 we get 0 1 2 3 4 
        
        
        for(int i=0;i<trust.size();i++)
        {
            output[trust[i][0]]--;
            output[trust[i][1]]++;
            
        }
        
        for(int j=1;j<=n;j++)
        {
            if(output[j]==n-1)
            {
             return j;   
            }
        }
         return -1;
        
    }
};