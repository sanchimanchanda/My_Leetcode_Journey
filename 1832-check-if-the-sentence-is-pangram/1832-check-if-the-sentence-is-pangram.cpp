class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>freq(26,0);

        int n = freq.size();
        for(auto &ch: sentence){
            freq[ch - 'a']++;
        }

        for(int i = 0 ; i < n ; i++){
            if(freq[i] == 0){
                return false;
                break;
            }
        }
        return true;
    }
};