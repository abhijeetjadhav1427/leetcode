class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> un;
        vector<int>ans;
        for(int i=0;i<nums.size(); i++){
            un[nums[i]] = i;
        }
        for(int i=0; i<nums.size(); i++){
            int req = target-nums[i];
            if(un.find(req)!=un.end() && un[req]!=i){
                ans.push_back(i);
                ans.push_back(un[req]);
                break;
            }
        }
        return ans;
    }
};