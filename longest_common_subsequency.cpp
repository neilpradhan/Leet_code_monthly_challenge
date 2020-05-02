class Solution {
public:
    
//     int LCS(string text1, string text2, int size_a,int size_b){
        
//         if (size_a==0 || size_b==0){
//             return 0;
//         }
        
//         if (text1[size_a-1] == text2[size_b-1]){
//             return 1 + LCS(text1.substr(0,size_a-1), text2.substr(0,size_b-1),size_a-1,size_b-1);
//         }
        
//         return max(LCS(text1.substr(0,size_a-1), text2.substr(0,size_b),size_a-1,size_b), LCS(text1.substr(0,size_a), text2.substr(0,size_b-1),size_a,size_b-1));
//     }
    
    int longestCommonSubsequence(string text1, string text2) {
        // return LCS(text1,text2,text1.size(),text2.size());
        int m = text1.size();
        int n = text2.size();
        int dp[m+1][n+1];
        
        dp[0][0] = 0;
        
        for(int i=0;i<=m;i++){
            for(int j =0;j<=n;j++){
                
                if (i==0||j==0)
                    dp[i][j] = 0;
                
                else if (text1[i-1] == text2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                
            }
        }
        return dp[m][n];
        
        
        
    }
};
