class Solution {
public:
    int candy(vector<int>& r) {
        vector<int> lr(r.size(), 1);
        vector<int> rl(r.size(), 1);
        for(int i=1; i<r.size(); i++){
            if(r[i] > r[i-1]){
                lr[i] = lr[i-1] + 1;
            }
        }
        for(int i=r.size()-2; i>=0; i--){
            if(r[i] > r[i+1]){
                rl[i] = rl[i+1] + 1;
            }
        }
        int c=0;
        for(int i=0; i<r.size(); i++){
            c+=max(lr[i], rl[i]);
        }
        return c;
    }
};