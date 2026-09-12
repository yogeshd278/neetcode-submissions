class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        std::unordered_map<int, std::vector<int>> arr;

        for(int i = 0; i < nums.size() - 1; i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                arr[nums[i] + nums[j]] = std::vector<int>{i, j};
            }
        }

        auto item = arr.find(target);

        if(item != arr.end()) {
            return item->second;
        }
        return std::vector<int>{0, 0};
    }
};
