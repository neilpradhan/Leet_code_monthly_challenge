class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size()>1){
            sort(stones.begin(), stones.end());
            if (stones.back() == stones[stones.size()-2] ){stones.pop_back(); stones.pop_back(); }
            else{ stones[stones.size()-2] = stones.back()- stones[stones.size()-2]; stones.pop_back();}
                
        }
        
        if (stones.size()){return stones[0];}
        else{return 0;}
        
        

    }   
};
