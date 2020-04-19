class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum  = 0;
        int maximum = nums[0];
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            
            
            if (sum<0 &&  sum>=maximum){

                maximum = sum;
                sum = 0;
            }
            else if (sum<0 && sum<maximum){
                sum = 0;
            }
            else if (sum>maximum){
                maximum = sum;
            }
        }
            return maximum;
    }
};
