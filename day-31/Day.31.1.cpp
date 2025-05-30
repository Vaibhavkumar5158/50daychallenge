class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (auto& row : image) {
            // Step 1: Reverse the row
            reverse(row.begin(), row.end());
            // Step 2: Invert each bit
            for (int& pixel : row) {
                pixel ^= 1; // toggle 0 -> 1 and 1 -> 0
            }
        }
        return image;
    }
};
