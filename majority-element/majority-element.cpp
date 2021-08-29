class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        unordered_map<int,int>map;
        for(auto it:nums)
        {
            map[it]++;
        }
        int max=0;
        int value;
        for(auto x=map.begin();x!=map.end();x++)
        {
            if(x->second > max)
            {
                max=x->second;
                value=x->first;
            }
        }
        
        return value;
    }
};