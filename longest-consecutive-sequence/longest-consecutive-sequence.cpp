class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        
        sort(nums.begin(),nums.end());
        
        int longest=1;
        int count=1;
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
            {
                if(nums[i]==nums[i-1]+1)
                {
                    
                
                count+=1;
                }
            
            else
            {
                longest=max(longest,count);
                count=1;
            }
        }
        }
        return max(longest,count);
        
    }
};