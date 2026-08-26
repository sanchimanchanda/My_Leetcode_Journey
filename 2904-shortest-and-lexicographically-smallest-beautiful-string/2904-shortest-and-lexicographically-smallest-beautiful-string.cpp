class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int i = 0, j = 0;
        int ones = 0; // number of '1's in window [i, j]
        string result = "";
        while (j < n) {

            if (s[j] == '1') {
                ones++;
            }

            // remove extra 1's, then trim leading 0's
            while (ones > k || s[i] == '0') {
                if (s[i] == '1')
                    ones--;
                i++;
            }

            if (ones == k) {
                int len = j - i + 1;
                string temp = s.substr(i, len);
                if (result.empty() || len < result.length() ||
                    (len == result.length() && temp < result)) {
                    result = temp;
                }
            }
            j++;
        }
        return result;
    }
};