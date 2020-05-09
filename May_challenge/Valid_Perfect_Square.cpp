class Solution {
public:
    bool isPerfectSquare(int num) {
//         unordered_map<int, int> mp;
//         vector<int> v = {1,4,5,6,9,0};
//         for(int i = 0;i<v.size();i++){
//          mp[v[i]] = 1;           
//         }
        
        
//         int last_digit  = num%10;
        
//         if (mp.find(last_digit) != mp.end()){
//             if (num%10 == 0 && num%100 == 0){
//                 int l = num%1000;
//                 if (mp.find(l) != mp.end()){
//                     return true;
//                 }
//             }
            
            
//             // can be a square
//             if (num%5 == 0){
//                 int n = num%100;
//                 if (n == 25){
//                     return true;
//                 }
//             }
            
//             return true;
//         }
        
        
//         return false;
        
        
        
        
        int i = 1;
        while(num>0){
            num  = num - i;
            i+=2;           
        }
         if (num==0){return true;}
         return false;

        

    }
};
