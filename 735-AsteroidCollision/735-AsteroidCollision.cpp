// Last updated: 23/12/2025, 00:15:15
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for(int x : asteroids){
            if(x>0){
                st.push_back(x);
            }else{
                while(st.size() && st.back() > 0 && st.back()<-x){
                    st.pop_back();
                }
                if(st.size() && st.back()==-x){
                    st.pop_back();
                }
                else if(st.empty() || st.back() < 0 ){
                    st.push_back(x);
                }
                
            }
            
        }
        return st;
    }
};