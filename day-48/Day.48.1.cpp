class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorResult = x ^ y;
        int count = 0;
        while (xorResult) {
            count += xorResult & 1;   // check last bit
            xorResult >>= 1;          // shift right
        }
        return count;
    }
};
