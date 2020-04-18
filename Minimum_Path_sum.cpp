class Solution {
private:
    int dfs(int i, int j,vector<vector<int>>& grid,int r,int c){
        
        if (i==r-1 && j==c-1){
            return grid[i][j];
        }
        
        if (i<0 || j<0 || i>=r || j>=c){return 0;}
        
        int right = dfs(i,j+1,grid,r,c);
        int down  = dfs(i+1,j,grid,r,c);
        
        return std::min(right,down);
        
    }
    
    
    
    
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows  = grid.size();
        int cols  = grid[0].size();
        
        int ans = INT_MAX;
        // for(int i=0;i<rows;i++){
        //     for (int j=0;j<cols;j++){
                ans = std::min(ans,dfs(0,0,grid,rows,cols));
                
// '            }
//         }'
        
        return dfs(0,0,grid,rows,cols);
    }
};
