class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int l[10001] = {0};
        int r[10001] = {0};
        
        for(auto x : trust){
            
            l[x[0]]++;
            r[x[1]]++;
            
        }
        for(int i=1;i<=N;i++){
            if ((l[i] == 0) && (r[i] == N-1)){
                return i;
            }
            
        }
        return -1;
        
        

        
        
        
    }
};
