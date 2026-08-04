class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int prevPref = pref[0];

        for (int i = 1; i < pref.size(); i++) {
            int currPref = pref[i];
            pref[i] = currPref ^ prevPref;
            prevPref = currPref;
        }

        return pref;
    }
};