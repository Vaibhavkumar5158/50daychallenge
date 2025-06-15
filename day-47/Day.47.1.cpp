class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int res = 0;
        int count[3] = {0, 0, 0}; // for a, b, c
        int left = 0;

        for (int right = 0; right < n; ++right) {
            count[s[right] - 'a']++;

            while (count[0] > 0 && count[1] > 0 && count[2] > 0) {
                res += (n - right);  // substrings from left to end are valid
                count[s[left] - 'a']--;
                left++;
            }
        }

        return res;
    }
};
