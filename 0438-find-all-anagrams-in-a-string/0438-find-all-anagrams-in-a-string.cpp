class Solution {
public:
bool allZero(vector <int> &count){
    return all_of(count.begin(),count.end(),[](int x){
        return x == 0 ;
    });
}
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int i = 0 , j = 0 ;
        int n = s.size();
        int k = p.size();
        vector<int> count(26,0);

        for(char ch : p){
            count[ch - 'a']++;
        }

        while(j < n ){
            count[s[j]- 'a']--;

            if(j-i+1 == k){
                if(allZero(count)){
                    result.push_back(i);
                }
                count[s[i] - 'a']++;
                i++;
            }
            j++;
        }
        return result;
    }
};