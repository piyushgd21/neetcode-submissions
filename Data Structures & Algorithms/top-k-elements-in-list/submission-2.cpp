class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector <int> result;
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
        for(auto &[val, freq] : count){
            minHeap.push({freq, val});
            if(minHeap.size() > k){
                minHeap.pop();
            }
        }
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
        
    }
};
