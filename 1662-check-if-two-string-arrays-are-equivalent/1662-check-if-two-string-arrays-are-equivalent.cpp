class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string result1 = "";
        string result2 = "";

        for(auto &ch : word1){
            result1 += ch;
        }

        for(auto &ch : word2){
            result2 += ch;
        }

        if(result1 == result2){
            return true;
        }
        return false;
    }
};