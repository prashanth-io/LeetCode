class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int>set;
        vector<int>v;
        
        
        for(int i=0;i<nums1.size();i++)
        {
            set.insert(nums1[i]);
        }
        
        for(int i=0;i<nums2.size();i++)
        {
           if( set.find(nums2[i])!=set.end())
           {
               auto it=find(v.begin(),v.end(),nums2[i]);
               if(it==v.end())
               {
                   v.push_back(nums2[i]);
               }
               
           
        
            
           }
        }
        return v;
    }
};