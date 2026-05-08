class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i <= j){
            while(!isalnum(s[i]) and (i <= j)) i++;
            while(!isalnum(s[j]) and (i <= j)) j--;
            if(i >= j) return true;
        

            if((tolower(s[i]) != tolower(s[j]))){
                cout << i << " " << j << endl;
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
