#include <numeric> // for std::gcd

class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g = nums[0];
        for (int num : nums) {
            g = gcd(g, num);
            if (g == 1) return true; // early exit if gcd becomes 1
        }
        return g == 1;
    }
};
