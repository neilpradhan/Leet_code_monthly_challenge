class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        // int* arr = new arr[]
        vector<int>* arr = new vector<int>();
        int c =0;
        for(int i=0;i<nums.size();i++){
             c = (nums[i]==0)? -1 : 1;
            arr->push_back(c);
            
        }
        
        
        // now we have a array of -1 and 1
        int max_size1 = 0;
        int sum_1 =0;
        for(int i=0;i<arr->size();i++){
            sum_1+=arr->at(i);
            if (sum_1==0){
                if (max_size1<i+1){
                    max_size1 = i+1;
                }
            }
        
        }
        
        
        
        
        
         // code for without starting index       
        unordered_map<int, int> hm; // first  key will be the sum and second value will be index
        
        int max_size = -1;
        int sum =0;
        

        for(int i=0;i<nums.size();i++){
            sum += arr->at(i);
        // IF ITS THERE IN THE HASH MAP FIND INDEX AND SUBTRACT FROM CURRENT INDEX        
        if (hm.find(sum)!= hm.end()){
            if (max_size<(i-hm[sum])){
                max_size = i - hm[sum];
            }
        }
    else{
            hm[sum] = i;
            cout<<"done";
        }
    
        }
        
        
        
        
        return max(max_size,max_size1);
    
    };
};
