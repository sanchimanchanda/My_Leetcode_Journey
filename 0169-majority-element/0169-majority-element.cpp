class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0 ; 
        int major_element = NULL;
        int n = nums.size();

        for(int i = 0 ; i < n ; i++ ){
            if(major_element == nums[i] ){
                cnt++;
            }
            else if(cnt == 0){
                major_element = nums[i];
                cnt=1;
            }else{
                cnt--;
            }
        }
        return major_element;
    }
};