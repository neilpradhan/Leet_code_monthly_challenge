class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        
        for(char c : s){
            m[c]++;
        }
        
        
        typedef unordered_map<char,int> my_map;
        
        map<int,string> u;

        
        for (auto v : m){
            char c = v.first;
            int x = v.second;
            u[x] += string(x,c);

         }
        
        

        
        
        // map<int,char> :: iterator it = u.rbegin();
        
        string k ;
        for(auto it = u.rbegin();it!=u.rend();++it){
            int n = it->first;
            cout<<n;
             k+= it->second;

        }
        return k;
        
    }
    
    
    
//         string frequencySort(string s) {
//         unordered_map<char, int> freqOfChar;
//         for(char c : s) {
//             freqOfChar[c] ++;
//         }
        
//         map<int, string> dupStr;
//         for(auto v : freqOfChar) {
//             char c = v.first;
//             int n = v.second;
//             dupStr[n] += string(n, c);
//         }
        
//         string res;
//         for(auto rit = dupStr.rbegin(); rit != dupStr.rend(); ++rit) {
//             res += rit->second;
//         }
//         return res;
//     }
};
