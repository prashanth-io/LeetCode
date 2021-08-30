class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        long int c=1;
        for(int i=1;i<=rowIndex+1;i++)
        {
            ans.push_back(c);
            c=c*(rowIndex+1-i)/i;
        }
        return ans;
        
    }
};