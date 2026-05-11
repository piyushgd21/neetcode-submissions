class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> tempstack;
        
        //tempstack.push(temperatures[0]);
        int i = 0;
        int n = temperatures.size();
        vector<int>result(n,0);
        vector<int> output(n,0);
        while(i < temperatures.size()){
            while((!tempstack.empty()) and (temperatures[i] > tempstack.top().second)){
                int com = tempstack.top().first;
                result[com] = i-com;
                tempstack.pop();
                
            }
            tempstack.push({i,temperatures[i]});
            i++;
        }
        return result;
    }
};
