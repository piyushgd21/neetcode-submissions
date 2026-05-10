class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int max_len = 0;
        int max_freq = 0;
        unordered_map<char, int> count;
        while(right < s.length()){
            char c = s[right];
            count[c]++;
            max_freq = max(max_freq, count[c]);
            while(((right-left+1) - max_freq) > k){
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
