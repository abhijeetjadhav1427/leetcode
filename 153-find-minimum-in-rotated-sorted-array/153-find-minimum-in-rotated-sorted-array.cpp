class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        while(nums[l] > nums[r]){
            l++;
        } 
        return nums[l];
    }
};