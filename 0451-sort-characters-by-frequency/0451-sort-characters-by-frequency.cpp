class Solution {
public:
    typedef pair<char, int> P;
    string frequencySort(string s) {
        // created a vector to store freqency
        vector<P> vec(123);
        // store frequency
        for (char& ch : s) {
            int freq = vec[ch].second;
            vec[ch] = {ch, freq + 1};
        }
        string result = "";
        // sort vector 
        auto comp =[&](P p1 , P p2){
            return p1.second>p2.second;
        };
        sort(vec.begin(),vec.end(),comp);
        for (int i = 0; i < 123; i++) {
            if (vec[i].second > 0) {
                char ch = vec[i].first;
                int freq = vec[i].second;
                auto temp = string(freq, ch);
                 result += temp;
            }
        }
        return result;
    }
};