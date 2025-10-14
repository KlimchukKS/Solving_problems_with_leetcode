// По скорости O(n)
// По памяти O(n)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        result.reserve(nums.size());

        for (auto i = 0, j = n; j < nums.size(); ++i, ++j) {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }

        return result;
    }
};
