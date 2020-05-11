class Solution {
public:
    
    
    bool isvalid(int x, int y, vector<vector<int>>& image){
        if (x>=image[0].size() || y>=image[0].size() || x>=image.size() || y>=image[0].size()
           || x<0||y<0){
            return false;
        }
        return true;
    };
    
    
    
    void func(vector<vector<int>>& image,int sr, int sc, int newColor, int c){
        
        cout<<"sr"<<"sc"<<sr<<" "<<sc;
        cout<<endl;
         if (!isvalid (sr,sc,image)){
             return;
         }
        
        
        
        if (c==newColor){
            return;
        }
         
        if (image[sr][sc] == c){
            image[sr][sc] = newColor;
        }else{
            return;
        }
        

             
        
        
        int a[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
            
        for (int i=0;i<4;i++){
            int new_x = sr + a[i][0];
            int new_y = sc + a[i][1];
            func(image,new_x,new_y,newColor,c);
        }       
        
    }

    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int c = image[sr][sc];
            
        // cout<<"c"<<c;
           
        func(image, sr, sc, newColor, c);
            
        return image;
        
        
        
    }
    
    
};
    

    
    
    
