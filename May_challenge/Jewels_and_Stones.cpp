class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char,int> mp;
        for (int i=0;i<J.size();i++){
            mp[J[i]] = 1;
        }
        
        int count = 0; 
        for(int i =0;i<S.size();i++){
            if (mp.find(S[i])!=mp.end())
                count++;
        }
        
        return count;
    }
};
