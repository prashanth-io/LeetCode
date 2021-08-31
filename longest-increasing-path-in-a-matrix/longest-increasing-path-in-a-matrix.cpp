class Solution {
public:
    
    int lip(vector<vector<int>>&matrix,int i,int j,vector<vector<int>>&memo)
    {
        
        if(i<0 || j<0 || i>=matrix.size() || j>=matrix[0].size())
        {
            return 0;
        }
        
        if(memo[i][j]>0)
        {
            return memo[i][j]; 
        }
        int currentmax=1;
        //down neighbour //helpful neighbour
        
        if(i+1<matrix.size() && i+1 >=0 && matrix[i+1][j] > matrix[i][j])
        {
            currentmax=max(currentmax,1+lip(matrix,i+1,j,memo));
        }
        //right neighhbour i,j+1
         if(j+1<matrix[0].size() && j+1 >=0 && matrix[i][j+1] > matrix[i][j])
        {
            currentmax=max(currentmax,1+lip(matrix,i,j+1,memo));
        }
        //left neighbour  i,j-1
         if(j-1<matrix[0].size() && j-1 >=0 && matrix[i][j-1] > matrix[i][j])
        {
            currentmax=max(currentmax,1+lip(matrix,i,j-1,memo));
        }
        
        //top neighbour   i-1,j
         if(i-1<matrix.size() && i-1 >=0 && matrix[i-1][j] > matrix[i][j])
        {
            currentmax=max(currentmax,1+lip(matrix,i-1,j,memo));
        }
        memo[i][j]=currentmax;
        
        return currentmax;
        
         
    }
    
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        vector<vector<int>>memo(matrix.size(),vector<int>(matrix[0].size(),0));
        
        int Max=0;
        
         
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                
            Max=max(Max,lip(matrix,i,j,memo));
                
                
                
            }
        }
        
        
        
        
        
        
        return Max;
        
        
        
        
    }
};