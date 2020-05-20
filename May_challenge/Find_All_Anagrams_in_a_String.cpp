class Solution {
    
public:
    vector<int> findAnagrams(string s, string p) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int> ans;
        vector<int> expected_window(26);
        vector<int> curr_window(26);
        int window = p.size();
        int len = s.size();
        if(len<window)
            return ans;
        
        
        int left = 0,right = 0;
        while(right<window)
        {
            expected_window[p[right]-'a'] +=1;
            curr_window[s[right]-'a'] +=1;
            right++;
        }
        right -=1;
        
    // now right  is 2;
        
        while(right<len)
        {
            if(curr_window == expected_window)
                ans.push_back(left);
            right+=1;
            if(right!=len)
                curr_window[s[right]-'a'] +=1;
            curr_window[s[left]-'a'] -=1;
            left+=1;
        }
        return ans;
    }
};


