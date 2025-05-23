class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int n = nums.size();
        int s = 0;
        int e = n - 1;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }

        return s; //// this is important why we return s because If target
                  /// exists, we already returned its index.

        // If not, left is where it should be inserted.
        // left is the first index where target could be placed without breaking
        // the sorted order.

        // If the target is already in the array, it will be at index left.

        // If not, left is where it should be inserted to keep the array sorted.
    }
};

// 22 may 2025 khud se  aaray ques dsa array part dsa red