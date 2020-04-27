

class Solution {
public:
    
    int bitwise_and(int n){
        int msb = -1;
        while(n){
            n = n>>1;
            msb++;
        }
        return msb;
    }
    
    int rangeBitwiseAnd(int m, int n) {
       ll ans = 0;
        
        while(m && n){
            int b_1 = bitwise_and(m);
            int b_2 = bitwise_and(n);
            
            
            if (b_1!=b_2){
                break;
            }
            
            ans += (1<<b_1);
            
            m = m - (1<<b_1);
            n = n - (1<<b_1);
        }
        
        return ans;
        
    }
};
