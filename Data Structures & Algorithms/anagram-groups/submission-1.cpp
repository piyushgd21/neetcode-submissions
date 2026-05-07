class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> wordCountMap;
        vector<vector<string>> result;
        
        for(int i = 0; i < strs.size(); i++){
            vector<int> charCount(26,0);
            for(char word : strs[i]){
                charCount[word - 'a']++;
            }
            string key = "";
            for(int j = 0; j < 26; j++){
                key = key + to_string(charCount[j]) + "#";
            }
            wordCountMap[key].push_back(strs[i]);    
        }
        for(auto it = wordCountMap.begin(); it != wordCountMap.end(); ++it){
            result.push_back(it->second);
        }

        return result;

    }
};
