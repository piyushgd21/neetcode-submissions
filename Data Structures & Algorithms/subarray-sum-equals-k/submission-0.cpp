class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int pre = 0;
        unordered_map<int,int> s;
        s[0] = 1;
        int count = 0;
        for(int i = 0; i < n; i++){
            pre = pre + nums[i];
            int dif = pre-k;
            if(s.find(dif) != s.end()){
                count = count + s[dif];
            }
            s[pre]++;

        }
        return count;
    }
};