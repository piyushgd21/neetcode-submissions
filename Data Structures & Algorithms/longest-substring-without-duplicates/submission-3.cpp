class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> lti;
        int l = 0;
        int currentl = 0;
        if(s.length() == 0){
            return 0;
        }
        for(int i = 0; i < s.length(); i++){
            
            if(lti.find(s[i]) != lti.end()){
                currentl = min(currentl+1, i - lti[s[i]]);
                
            }
            else{
                currentl++;
            }
            l = max(l, currentl);
            lti[s[i]] = i;
        }

        return l;
    }
};
