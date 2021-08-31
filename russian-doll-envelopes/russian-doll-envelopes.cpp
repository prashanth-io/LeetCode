class Solution {
public:
    
    bool static comp(vector<int>&x,vector<int>&y){
    
    if(x[1]==y[1]){
        return x[0]<y[0];
    }
    
    return x[1]<y[1];
}
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        
        vector<int>dp(envelopes.size(),1);
        int maxx=1;
        
        sort(envelopes.begin(),envelopes.end(),comp);
        
        for(int i=0;i<envelopes.size();i++)
        {
            
            for(int j=0;j<i;j++)
            {
                if((envelopes[i][0]>envelopes[j][0]) &&(envelopes[i][1]>envelopes[j][1]))
                
                    dp[i]=max(dp[i],dp[j]+1);
                
            }
            maxx=max(maxx,dp[i]);
        }
        return maxx;
        
    }
};