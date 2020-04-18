class Solution {
private:
//     int dfs(int i, int j,vector<vector<int>>& grid,int r,int c){
        
//         if (i==r-1 && j==c-1){
//             return grid[i][j];
//         }
        
//         if (i<0 || j<0 || i>=r || j>=c){return 0;}
        
//         int right = dfs(i,j+1,grid,r,c);
//         int down  = dfs(i+1,j,grid,r,c);
        
//         return std::min(right,down);
        
//     }
    
    
    
    
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows  = grid.size();
        int cols  = grid[0].size();
        
        int dp[rows][cols];
            dp[0][0] = grid[0][0];
        for(int i =1;i<rows;i++){
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }
        for(int j =1;j<cols;j++){
            dp[0][j] = dp[0][j-1] + grid[0][j];
        }
        
        for(int i =1;i<rows;i++){  
            for(int j =1;j<cols;j++){
            
            dp[i][j] = min(dp[i][j-1],dp[i-1][j]) + grid[i][j];
        
            }
         }     
        return dp[rows-1][cols-1];
        

    }
};
