class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        set<int,greater<int>> s(nums.begin(),nums.end());
        set<int,greater<int>> :: iterator it = s.begin(); 
       for(int i=1;i<k;i++){
           it++;
       }
        return *it;
        
    }
};
