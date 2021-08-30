class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        int val=1;
        vector<vector<int>>a(n,vector<int>(n));
        
            
        
     while(val<=n*n)
     {
         
     
        
        for(int i=left;i<=right;i++)
        {
           a[top][i]=val++;
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            a[i][right]=val++;
        }
        right--;
        
        if(top<=bottom)
        {
            
        
        for(int i=right;i>=left;i--)
        {
            a[bottom][i]=val++;
            
        }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                a[i][left]=val++;
            }
            left++;
        }
     }
        return a;
    }
};