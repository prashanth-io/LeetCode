class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int sum=0;
        sort(costs.begin(),costs.end(),relativecost);
        
        for(int i=0;i<costs.size()/2;i++)
        {
            sum+=costs[i][0];
        }
        for(int i=costs.size()/2;i<costs.size();i++)
        {
            sum+=costs[i][1];
        }
        
        return sum;
        
    }
    
    static bool relativecost(vector<int>&first,vector<int>&second)
    {
        return first[1]-first[0] >second[1]-second[0];
    }
};