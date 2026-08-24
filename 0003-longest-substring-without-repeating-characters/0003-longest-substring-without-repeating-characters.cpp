class Solution {
public:
    bool allOne(vector<int>& count) {
        return all_of(count.begin(), count.end(), [](int x) {
            return x == 0 || x == 1;
        });
    }

    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0, j = 0;
        int result = 0;

        vector<int> count(128, 0);

        while (j < n) {
            count[s[j]]++;

            while (!allOne(count)) {
                count[s[i]]--;
                i++;
            }

            result = max(result, j - i + 1);
            j++;
        }

        return result;
    }
};