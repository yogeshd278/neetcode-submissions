class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;
        unordered_map<string, vector<string>> umap;

        for (auto str : strs) {
            string temp = str;
            sort(str.begin(), str.end());
            umap[str].push_back(temp);
        }

        for (auto str : umap) {
            vector<string> temp = str.second; 
            result.push_back(temp);
        }

        return result;

    }
};
