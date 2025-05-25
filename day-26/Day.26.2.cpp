#include <vector>
using namespace std;

class Solution {
public:
    // Helper function to find the start or end index
    int binarySearch(vector<int>& nums, int target, bool findStart) {
        int s = 0, e = nums.size() - 1;
        int result = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                result = mid;
                if (findStart)
                    e = mid - 1;  // search left for start
                else
                    s = mid + 1;  // search right for end
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int start = binarySearch(nums, target, true);   // start index
        int end = binarySearch(nums, target, false);    // end index
        return {start, end};
    }
};
