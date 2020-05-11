class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
                    vector<char> v ;
                    vector<char> t;
        for (int i=0;i<S.size();i++){
            
        
            v.push_back(S[i]);
            if (S[i] == '#'){
                v.pop_back();
                if (!v.empty()){v.pop_back();}
            }
        }
        
        for (int i=0;i<T.size();i++){
            
            t.push_back(T[i]);
            if (T[i] == '#'){
                t.pop_back();
                
                if (!t.empty()){t.pop_back();}
            }
        }
        
        
        if (v==t){
            return true;
        }
        return false;
    }
};
