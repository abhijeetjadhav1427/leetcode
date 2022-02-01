class Solution {
public:
    vector<int> smallestRange(vector<vector<int>> nums) {
        vector<int> ans(2);
        priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>>> q;
        int mx = INT_MIN;
        int r = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            q.push({nums[i][0], i, 0});
            if(nums[i][0] > mx) mx = nums[i][0];
        }
        
        while(true){
            vector<int> v = q.top();
            q.pop();
            if(mx-v[0]+1 < r){
                r = mx-v[0]+1;
                ans = {v[0], mx};
            }
            if(nums[v[1]].size() == v[2]+1) break;
            if(mx < nums[v[1]][v[2]+1]) mx = nums[v[1]][v[2]+1];
            q.push({nums[v[1]][v[2]+1], v[1], v[2]+1});
        }
        return ans;
    }
};