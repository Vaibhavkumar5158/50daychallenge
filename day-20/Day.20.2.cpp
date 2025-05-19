#include <vector>
#include <algorithm>  // for min_element, max_element, __gcd
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        return __gcd(mn, mx);
    }
};
