class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i]) {
                ans = nums[i];
            }
        }
        return ans;
    }
};