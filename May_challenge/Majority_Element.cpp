class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map <int,int> m;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
      unordered_map<int,int>::iterator it = m.begin();
    int maximum_idx = 0;
        int maximum  = INT_MIN;
    for(;it!=m.end();it++){
        if (it->second>maximum){
            maximum_idx = it->first;
            maximum = it->second;
        }
    }
     return maximum_idx;   
        
    }
};
