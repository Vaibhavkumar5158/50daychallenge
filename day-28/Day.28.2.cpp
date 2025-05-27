class Solution {
public:
    //  to compute GCD
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    //  to compute LCM using GCD
    long long lcm(long long a, int b) {
        return (a * b) / gcd(a, b);
    }

    int subarrayLCM(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            long long currLCM = nums[i];
            if (currLCM == k) count++;

            for (int j = i + 1; j < n; j++) {
                currLCM = lcm(currLCM, nums[j]);
                if (currLCM > k) break;         // Early stop
                if (currLCM == k) count++;
            }
        }

        return count;
    }
};
