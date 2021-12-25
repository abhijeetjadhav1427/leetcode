class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s=0;
        int total=0, curr=0;
        for(int i=0; i<gas.size(); i++){
            total += gas[i]-cost[i];
            curr += gas[i]-cost[i];
            if(curr<0){
                s = i+1;
                curr = 0;
            }
        }
        
        if(total < 0) s = -1;
        
        return s;
    }
};