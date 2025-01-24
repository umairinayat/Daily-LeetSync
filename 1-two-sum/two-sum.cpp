class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
        unordered_map<int, int> map;
        for(int i =0; nums.size() ; i++){
            int complement = target - nums[i];

       
            if (map.find(complement) != map.end()) {
              
                return { map[complement], i };
            }

            
            map[nums[i]] = i;
        }
         // Return an empty vector if no solution is found
        return {};
    }
};