class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0;
        int minpro=10000;
        
        for(int i=0;i<prices.size();i++)
        {
            minpro=min(minpro,prices[i]);
            maxpro=max(maxpro,prices[i]-minpro);
        }
        return maxpro;
        
    }
};