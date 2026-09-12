class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> arr;

        for(int i = 0; i < nums.size(); i++) {
            // for(int j = i + 1; j < nums.size(); j++) {
            //     if(nums[i] + nums[j] == target) {
            //         return std::vector<int>{i, j};
            //     }
            //     continue; 
            // }

            auto item = arr.find(target - nums[i]);
            if(item != arr.end()) {
                return std::vector<int>{item->second, i};
            }
            arr[nums[i]] = i;
        }

        return std::vector<int>{0, 0};
    }
};
