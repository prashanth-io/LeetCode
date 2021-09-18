class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xoran=0;
        
        for(auto it:nums)
        {
            xoran^=it;
        }
        return xoran;
    }
};

