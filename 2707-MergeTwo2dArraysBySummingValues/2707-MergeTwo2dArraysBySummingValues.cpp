// Last updated: 23/12/2025, 00:14:56
class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int i = 0;
        int j = 0;
        vector<vector<int>> ans;

        while(i < nums1.size() && j < nums2.size()){
            int id1 = nums1[i][0], val1 = nums1[i][1];
            int id2 = nums2[j][0], val2 = nums2[j][1];

            if(id1 < id2){
                ans.push_back({id1,val1});
                i++;
            }else if(id2 < id1){
                ans.push_back({id2,val2});
                j++;
            }
            else{
                // Ids are equal, sum the values
                ans.push_back({id1, val1 + val2});
                i++;
                j++;
            }
        }
        // Add remaining elements from nums1, if any
        while (i < nums1.size()) {
            ans.push_back(nums1[i]);
            i++;
        }
        
        // Add remaining elements from nums2, if any
        while (j < nums2.size()) {
            ans.push_back(nums2[j]);
            j++;
        }

        return ans;
    }
};