/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
    
private:
    
    
//     int binary_helper(int i,int start,int end, BinaryMatrix &binaryMatrix){
//         while (start<=end){
//             int mid = (start+end)/2;
            
            
//             if binaryMatrix.get(i,mid) == 1
//         }
//     }
    
//     int binary_search(int i,int rows,BinaryMatrix &binaryMatrix){
//         return binary_helper(i,0,rows-1, binaryMatrix);
//     }
    
    
    bool one_exist_in_col(int col_num, int rows,int cols,BinaryMatrix &binaryMatrix ){
        for (int i=0;i<rows;i++){
            if (1 == binaryMatrix.get(i,col_num)){return true;}
            
        }
        return false;
    }
    
    
    
    int result_binary(int start, int end,BinaryMatrix &binaryMatrix){
        
        int rows  = binaryMatrix.dimensions()[0];
        int cols  = binaryMatrix.dimensions()[1];
        
        while(start<=end){
            int mid = start + (end-start)/2;
            
            if (one_exist_in_col(mid,rows,cols,binaryMatrix)){
                end = mid;
            }else{
                start = mid+1;
            }
                           
        }
        return start;
    }
    
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int rows  = binaryMatrix.dimensions()[0];
         int cols  = binaryMatrix.dimensions()[0];
        // int lowest_index = INT_MAX;
        
        int curr_row = 0;
        int curr_col  = cols-1;
        
        while(curr_row< rows &&  curr_col <cols && curr_row>=0 && curr_col>=0){
            if (binaryMatrix.get(curr_row,curr_col) == 0){
                curr_row ++ ;
            }
            else{
                curr_col--;
            }
        }
        if (curr_col!=cols -1){
        return curr_col +1;             
        }
        
        return -1;
       
    
    }
};
