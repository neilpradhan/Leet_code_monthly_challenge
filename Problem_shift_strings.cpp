#include<string>

class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int left_shifts = 0;
        int right_shifts = 0;
        for(int i=0;i<shift.size();i++){
            if (shift[i][0] == 0){left_shifts+=shift[i][1];}
            else{right_shifts+=shift[i][1];}
            
                   
        }
        
        string ans; 
        int net = right_shifts-left_shifts;
        cout<<net;
        if (net>0){
            
        ans.append(s.substr(s.length()-(net-1)-1,s.length())); 
        ans.append(s.substr(0, s.length()-net));    
        
        return ans;}
    
        else if (net<0)
        {
            net = -net;
         ans.append(s.substr(s.length()-net+1,s.length()));  
         ans.append(s.substr(0, s.length()-net+1));  
                   return ans;}
    
    
        else{return s;}
        // return s;
    }
};
