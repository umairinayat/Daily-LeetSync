// Last updated: 23/12/2025, 00:14:55
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        std::unordered_map<int, int> freqcount;
        for(int num : nums){
            freqcount[num]++;
        }

        int maxfreq=0;
        for(auto& i : freqcount){
            maxfreq = std:: max(maxfreq, i.second);
        }

        int maxfreqele= 0;

        for(auto & i : freqcount){
            if(i.second== maxfreq){
                maxfreqele++;
            }
        }

        int totalfrq= maxfreq * maxfreqele;
        return totalfrq;
    }
};