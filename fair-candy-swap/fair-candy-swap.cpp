class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        int sum1=0;
        int sum2=0;
        int delta;
        vector<int>ans;
        set<int>s1;
        
        for(int i=0;i<bobSizes.size();i++)
        {
            sum2+=bobSizes[i];
            s1.insert(bobSizes[i]);
        }
        for(int j=0;j<aliceSizes.size();j++)
        {
            sum1+=aliceSizes[j];
            
        }
        
        delta=(sum2-sum1)/2;
        
        for(int k=0;k<aliceSizes.size();k++)
        {
            auto it=s1.find(aliceSizes[k]+delta);
            if(it!=s1.end())
            {
                ans.push_back(aliceSizes[k]);
                ans.push_back(aliceSizes[k]+delta);
                return ans;
            }
        }
        return ans;
        
    }
};