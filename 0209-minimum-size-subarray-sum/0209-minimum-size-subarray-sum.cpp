class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum = 0 ; 
        int minL = INT_MAX;

        int i = 0 , j = 0;

        while(j < n){
            sum += nums[j];
            while(sum >= target){
                minL = min((j-i+1),minL);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(minL == INT_MAX) return 0;
        return minL;
    }
};