class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector <int> result(2*n);

        for(int i = 0 ; i < n; i++ ){
            result[i] = nums[i];
        }
         int i = 0;
         int j = n;
         while(i < n){
            result[j] = nums[i];
            i++;
            j++;
         }
         return result;
    }
};