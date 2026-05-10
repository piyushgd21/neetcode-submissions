class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre = 1;
        int suf = 1;
        int n = nums.size();
        vector<int> res(n, 1);
        // res[0] = nums[0];
        // res[n-1] = nums[n-1];
        for(int i = 1; i < n; i++){
            pre = pre*nums[i-1]; 
            res[i] = res[i]*pre;
            suf = suf*nums[n-i];
            res[n-1-i] = res[n-1-i]*suf;
        }
        return res;

    }
};
