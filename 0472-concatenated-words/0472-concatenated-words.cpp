class Solution {
public:
    int n;
    // memorization
    unordered_map<string, bool> mp; // agar maine kisi word ke liye solve kar
                                    // rakha hai toh map mai store kar lete hai
    bool isConcat(string word, unordered_set<string>& st) {

        if (mp.find(word) != mp.end())
            return mp[word];
        // humara loop chalege sare prefix suffix nikal lenge

        int l = word.length();

        for (int i = 0; i < l; i++) {
            string prefix = word.substr(0, i + 1);
            string suffix = word.substr(i + 1);

            if ((st.find(prefix) != st.end() && isConcat(suffix, st)) ||
                (st.find(prefix) != st.end() && st.find(suffix) != st.end()))
                return mp[word] = true;
        }
        return mp[word] = false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        mp.clear(); // initialize map
        n = words.size();

        // store words in set
        unordered_set<string> st(begin(words), end(words));
        vector<string> result;
        // har ek word ko check karunga ki wo concatenated hai ki nahi

        for (int i = 0; i < n; i++) {
            if (isConcat(words[i], st))
                result.push_back(words[i]);
        }

        return result;
    }
};