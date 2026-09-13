class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> new_arr;
        unordered_map<int, vector<int>> bucket;
        vector<int> result;

        for (auto val : nums) {
            new_arr[val]++;
        }

        for (auto item : new_arr) {
            bucket[item.second].push_back(item.first);
        }

        for(int freq = nums.size(); freq >= 1 && result.size() < k; freq--) {
            for(auto item : bucket[freq]) {
                result.push_back(item);
            }

            if(result.size() == k) {
                break;
            }
        }
        return result;
    }
};
