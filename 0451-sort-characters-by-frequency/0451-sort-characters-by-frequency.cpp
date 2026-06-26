class Solution {
public:
    typedef pair<char, int> P;
    string frequencySort(string s) {
        // create a map to insert freq
        map<char, int> mp;

        for (auto& it : s) {
            mp[it]++;
        }

        struct Compare {
    bool operator()(const P &p1, const P &p2) {
        return p1.second < p2.second;
    }
};

            priority_queue<P, vector<P>, Compare> pq;
            // map ka stuff go in pq
            for (auto& it : mp) {
                pq.push({it.first, it.second});
            }

            string result = "";
            while (!pq.empty()) {
                auto temp = pq.top();
                result += string(temp.second,temp.first);
                pq.pop();

            }
            return result;
        }
    };