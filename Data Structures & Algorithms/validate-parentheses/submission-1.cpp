class Solution {
public:
    bool isValid(string s) {
        int count = 0;
        stack <int> st;
        unordered_map<char,char>mp;
        mp[')'] = '(';
        mp[']'] = '[';
        mp['}'] = '{';

        for(char c : s){
            if(mp.count(c)){
                if(!st.empty() and st.top() == mp[c]) st.pop();
                else return false;
            }
            else st.push(c);                      
        }
                 

        return st.empty();
    }
};
