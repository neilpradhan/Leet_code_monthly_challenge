class Solution {
    
    
private :
    void dfs(int i, int j,vector<vector<char>>& grid ){
        // we assume number of cols are equal therefore we take 
        int cols = grid[0].size();
        int rows = grid.size();

        
        if (j<0 || i<0 ||i>=rows || j>=cols || grid[i][j] =='0'){return;}
        
        grid[i][j] = '0';
        
        
        // int increment_x[4] = {0,0,+1,-1};
        // int increment_y[4] = {+1,-1,0,0};
        // for(int i=0;i<4;i++){dfs(i+increment_x[i],j+increment_y[i], grid);}
        
        dfs(i,j+1,grid); // right
        dfs(i+1,j,grid);// down 
        dfs(i,j-1,grid);// left
        dfs(i-1,j,grid);// up
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for (int j=0;j<grid[i].size();j++){
                if (grid[i][j]== '1' ){
                    ans++;                    
                    dfs(i,j,grid);

                }
                
                cout<<grid[i][j];
            }
        }
        
        return ans;
        
    }
};
