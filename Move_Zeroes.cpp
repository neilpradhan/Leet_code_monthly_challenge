class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count =0;
        int p = 0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=0){
                nums[p] = nums[i];
                p++;
            }
            else{
                count++;
            }

        }
        
        while(count--){
            
            nums[p] = 0;
            p++;
        }
        
        for(int i=0;i<nums.size();i++){
                cout<<nums[i];  
        }
    }
};
