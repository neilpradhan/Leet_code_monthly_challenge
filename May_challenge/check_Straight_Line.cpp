class Solution {
public:
    
    
    
    
    
    
    
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int del_x = coordinates[0][0] - coordinates[1][0];
        int del_y = coordinates[0][1] - coordinates[1][1];
        
        for(int i=1;i<coordinates.size();i++){
            if ((coordinates[i][1] - coordinates[i-1][1]) * del_x != del_y * (coordinates[i][0] - coordinates[i-1][0])){
                return false;
            }
        }
        
        return true;
        
        
    }
};
