class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        int ans = nums[0];
        while(l<=r){
            int m = (r+l)/2;
            if(nums[m] >= nums[l]){
                ans = min(ans, nums[l]);
                l = m+1;
            }
            else{
                ans = min(ans, nums[m]);
                r = m-1;
            }
        }
        return ans;
    }
};