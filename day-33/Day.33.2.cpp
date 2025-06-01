class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.length();
        int i = 0, j = n - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                char smallerChar = min(s[i], s[j]);
                s[i] = s[j] = smallerChar;
            }
            i++;
            j--;
        }

        return s;
    }
};  
