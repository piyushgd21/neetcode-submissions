class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        int max_len = 0;
        unordered_map<char, int> count;
        while(right < s.length()){
            char c = s[right];
            count[c]++;
            while(count[c] > 1){
                char left_char = s[left];
                count[left_char]--;
                left++;
            }
            max_len = max(max_len, right-left+1);
            right++;
        }
        return max_len;
    }
};
