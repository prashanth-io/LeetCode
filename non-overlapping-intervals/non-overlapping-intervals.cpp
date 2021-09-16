class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int l=intervals[0][1];
        int ans=0;
        
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<l)
            {
                ans++;
                l=min(l,intervals[i][1]);
            }
            else
            {
                l=intervals[i][1];
            }
        }
        return ans;
        
    }
};




// sort(intervals.begin(),intervals.end());
//         int l = intervals[0][1],ans=0;
//         for(int i=1;i<intervals.size();i++){
//             if(intervals[i][0]<l){
//                 ans++;
//                 l=min(l,intervals[i][1]);
//             }else{
//                 l=intervals[i][1];
//             }
//         }
        
//         return ans;