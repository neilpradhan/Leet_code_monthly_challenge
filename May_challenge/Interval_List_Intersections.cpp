class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
                    vector<vector<int>> output;
                    int i = 0;
                    int j =0;
        
                    while(i<A.size() && j<B.size()){
                        int lower = max(A[i][0], B[j][0]);
                        int higher = min(A[i][1],B[j][1]);
                        if (lower<=higher){
                            vector<int>v;
                            v.push_back(lower);
                            v.push_back(higher);
                            output.push_back(v);
                        }
                        
                        
                        
                        if (A[i][1]<B[j][1]){
                            i++;
                        }else{
                            j++;
                        }
                    }
        return output;
                    
    }
};
