// По скорости O(n * m)
// По памяти O(1)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum = 0;
        for (const auto& account : accounts) {
            int sum = 0;
            for (auto i : account) {
                sum += i;
            }

            if (sum > max_sum) {
                max_sum = sum;
            }
        }
        return max_sum;
    }
};
