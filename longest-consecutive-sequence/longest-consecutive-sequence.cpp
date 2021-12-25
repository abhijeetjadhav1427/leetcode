class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, bool> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]=true;
        }
        for(auto x: mp){
            if(mp.find(x.first-1) != mp.end()){
                mp[x.first] = false; 
            }
        }
        int m = 0;
        for(auto x: mp){
            if(x.second){ 
                int tl = 1;
                while(mp.find(x.first + tl) != mp.end()){
                    tl++;
                }
                m = max(tl, m);
            }
        }
        return m;
    }
};