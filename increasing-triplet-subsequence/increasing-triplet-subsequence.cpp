class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        
        double a= 1000000000;
        double b= 1000000000;
        double c= 1000000000;
        
        
        for(int i=0;i<nums.size();i++)
        {
            if(a>=nums[i])
            {
                a=nums[i];
            }
            else if(b>=nums[i])
            {
                b=nums[i];
            }
            
            else
            {
                c=nums[i];
            }
            
            if(a!=1000000000 && b!=1000000000 && c!=1000000000)
            {
                return true;
            }
        }
        return false;
    }
};