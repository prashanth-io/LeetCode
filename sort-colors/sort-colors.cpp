class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int num_of_colors = 3, i = 0, curr_num = 0;
        vector<int> hist(num_of_colors);
        for(const auto& elem : nums){
            hist[elem]++;
        }
        while(curr_num < num_of_colors){
            while(hist[curr_num]){
                nums[i++] = curr_num;
                hist[curr_num]--;
            }
            curr_num++;
        }
    }
};