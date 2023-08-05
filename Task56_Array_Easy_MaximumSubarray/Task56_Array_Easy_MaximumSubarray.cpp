#include <iostream>
#include <vector>

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int max = 0, result = 0;
        for (int i = 0;i < nums.size();i++) {
            max += nums[i];
            if (max <= 0)
                max = 0;
            else if (result < max)
                result = max;
        }
        auto tmp = std::max_element(nums.begin(), nums.end());
        if (*tmp < 0) {
            return *tmp;
        }
        return result;
    }
};
