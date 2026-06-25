class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute 
        int n = nums.size();
        unordered_map<int,int>freq;

        for(auto &cnt : nums){
            freq[cnt]++;
        }

        for(auto &pair : freq){
            if(pair.second > n/2){
                return pair.first;
            }
        }
        return -1;
    }
};