class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool ans =  false;
        if (s1.size()>s2.size()){
            return ans;
        }
        
        
        // sliding window approach
        vector<int>curr_window(26,0);
        vector<int>match(26,0);
        
        int left = 0;
        int right = 0;
        
        while(right<s1.size()){
            curr_window[s2[right]-'a']++;
            match[s1[right]-'a']++;
            right++;
        }
        
        right-=1;
        
        
        while(right<s2.size()){
            if (curr_window == match){
                return true;
            }
            right++;
            if (right!=s2.size()){
                 curr_window[s2[right] -'a']++;
            curr_window[s2[left] - 'a']-=1;               
                
            }

            left++;
        }
        
        return false;
        
        
    }
};
