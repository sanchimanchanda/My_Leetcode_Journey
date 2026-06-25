class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int major_element1 = NULL;

        int cnt2 = 0;
        int major_element2 = NULL;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (major_element1 == nums[i]) {
                cnt1++;
            } else if (major_element2 == nums[i]) {
                cnt2++;
            } else if (cnt1 == 0) {
                major_element1 = nums[i];
                cnt1 = 1;
            } else if (cnt2 == 0) {
                major_element2 = nums[i];
                cnt2 = 1;
            } else {
                cnt1--;
                cnt2--;
            }
        }

        // verify
        vector<int> result;
        int freq1 = 0, freq2 = 0;
        for (auto& num : nums) {
            if (num == major_element1) {
                freq1++;
            }
            if (num == major_element2) {
                freq2++;
            }
        }
        if (freq1 > floor(n / 3)) {
            result.push_back(major_element1);
        }
        if (major_element2 != major_element1 && freq2 > floor(n / 3)) {
            result.push_back(major_element2);
        }

        return result;
    }
};