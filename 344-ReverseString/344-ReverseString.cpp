// Last updated: 23/12/2025, 00:15:21
class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> b(s.size());
        int i=0;
        int j=s.size()-1;
        while(i<j){
            swap(s[j--], s[i++]);
        }
        
    }
};