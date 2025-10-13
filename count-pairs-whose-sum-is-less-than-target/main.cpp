class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int counter = 0;

        for (auto i = 0; i < nums.size() - 1; ++i) {
            for (auto j = 1; j < nums.size(); ++j) {
                if (i < j && nums[i] + nums[j] < target) {
                    ++counter;
                }
            }
        }

        return counter;
    }
};
