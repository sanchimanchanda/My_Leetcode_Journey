class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> freq(26, 0);

        int n = freq.size();
        int count = 0;
        for (auto& ch : sentence) {
            int idx = ch - 'a';
            if (freq[idx] == 0) {
                freq[idx]++;
                count++;
            }
        }
        if (count == 26) {
            return true;
        }
        return false;
    }
};