class Solution {
public:
    string getHint(string st, string gs) {
        vector<int> v(10, 0);
        int b = 0, c = 0;
        for(int i=0; i<st.size(); i++){
            int si = st[i]-'0';
            int gi = gs[i]-'0';
            if(si == gi){ 
                b++;
            }
            else{
                if(v[si]  < 0) c++;
                if(v[gi] > 0) c++;
                v[si]++;
                v[gi]--;
            }
        }

        string ans = to_string(b) + 'A' + to_string(c) + 'B';
        
        return ans;
    }
};