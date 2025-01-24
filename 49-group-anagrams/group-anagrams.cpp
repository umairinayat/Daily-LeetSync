class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         if (strs.empty()) {
            return {};
        }

        // // Create a map to store groups of anagrams
        // unordered_map<string, vector<string>> ansMap;

        // // Iterate through each string in the input
        // for (const string& s : strs) {
        //     // Initialize a count array for character frequencies
        //     int count[26] = {0};

        //     // Count the frequency of each character
        //     for (char c : s) {
        //         count[c - 'a']++;
        //     }

        //     // Build the key as a string using the character counts
        //     string key;
        //     for (int i = 0; i < 26; ++i) {
        //         key += "#" + to_string(count[i]);
        //     }

        //     // Add the string to the corresponding group in the map
        //     ansMap[key].push_back(s);
        // }

        // // Prepare the result
        // vector<vector<string>> result;
        // for (auto& pair : ansMap) {
        //     result.push_back(pair.second);
        // }

        // return result;

        //2nd approach

        unordered_map<string, vector<string>> anagramGroups;

        for (const string& s : strs) {
            // Create a key by sorting the string
            string key = s;
            sort(key.begin(), key.end());

            // Add the original string to the group of its sorted key
            anagramGroups[key].push_back(s);
        }

        // Prepare the result by extracting all groups from the map
        vector<vector<string>> result;
        for (const auto& pair : anagramGroups) {
            result.push_back(pair.second);
        }

        return result;
    }
};