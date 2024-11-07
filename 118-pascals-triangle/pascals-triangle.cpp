class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans;
       while(numRows>0){
          vector<int>currans;
          int res=1;
          currans.push_back(1);
          for(int i=1 ;i<numRows;i++){
            res = res*(numRows-i);  
            res/=i;
             currans.push_back(res);
          }
    
          ans.push_back(currans);
          numRows--;
       }
       sort(ans.begin(),ans.end());
    return ans;
    }
};