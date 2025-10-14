// По скорости O(2n) по правилам убираем константы остается O(n)
// По памяти O(n)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int> ans(nums.size() * 2);

        std::copy(nums.begin(), nums.end(), ans.begin());
        std::copy(nums.begin(), nums.end(), ans.begin() + nums.size());

        return ans;
    }
};
