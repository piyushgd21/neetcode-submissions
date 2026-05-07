class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> wordCountMap;
        vector<vector<string>> result;
        
        for(int i = 0; i < strs.size(); i++){
            vector<int> charCount(26,0);
            for(char word : strs[i]){
                charCount[word - 'a']++;
            } 
            wordCountMap[charCount].push_back(strs[i]);    
        }
        for(auto it = wordCountMap.begin(); it != wordCountMap.end(); ++it){
            result.push_back(it->second);
        }

        return result;

    }
};
