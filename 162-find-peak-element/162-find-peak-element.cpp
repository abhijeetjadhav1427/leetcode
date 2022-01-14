class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        return peak(nums, 0, nums.size()-1);
    }
    int peak(vector<int> nums, int l, int r){
        if(l>=r) return r;
        int m = (l+r)/2;
        if(nums[m] < nums[m+1]) return peak(nums, m+1, r);
        else return peak(nums, l, m);
    }
};