class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1 ; 
        int major_element = nums[0];
        int n = nums.size();

        for(int i = 1 ; i < n ; i++ ){
            if(cnt == 0 ){
                major_element = nums[i];
            }
            if(major_element == nums[i]){
                cnt++;
            }else{
                cnt--;
            }
        }
        return major_element;
    }
};