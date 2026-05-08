class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;
        vector <int> result;
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto &[val, freq]: count){
            bucket[freq].push_back(val);
        }
        for(int i = n; i >=0; i--){
            if(result.size() >= k){
                break;
            }
            for(int num : bucket[i]){
                result.push_back(num);
                if(result.size() >= k){
                    break;
                }
            }

        }
        return result;
    }
};
