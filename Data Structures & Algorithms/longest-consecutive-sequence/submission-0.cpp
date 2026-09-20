class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if(n == 0) return 0;

        int longest = 1;
        unordered_set<int> numSet;

        for(int i = 0; i < n; i++) {
            numSet.insert(nums[i]);
        }

        for(auto num : numSet) {
            if(numSet.find(num - 1) == numSet.end()) {
                int count = 1;
                int x = num;

                while(numSet.find(x + 1) != numSet.end()) {
                    x += 1;
                    count += 1;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
