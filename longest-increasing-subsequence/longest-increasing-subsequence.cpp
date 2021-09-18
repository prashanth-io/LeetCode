class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        int map[n];
        
        int maxi=0;
       map[0]=1;
        
        for(int i=1;i<n;i++)
        {
            map[i]=1;
            
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    map[i]=max(map[i],map[j]+1);
                }
            }
        }  
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,map[i]);
        }
        return maxi;
        
    }
};