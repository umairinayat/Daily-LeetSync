// Last updated: 23/12/2025, 00:14:59
class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int,int>> st;

        for(auto it : intervals){
            st.push_back({it[0],1});
            st.push_back({it[1]+1,-1});
        }

        sort(st.begin(),st.end());

        int maxi = 1;
        int grp = 0;

        for(auto it : st){
            grp += it.second;
            maxi = max(grp,maxi);
        }

        return maxi;
    }
};