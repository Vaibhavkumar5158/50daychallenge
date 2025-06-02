class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int n = s.size();

        // Start from the end and skip spaces from back
        int i = n - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        // print length
        // Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        return length;
    }
};

// 2 june 2025 khud se kia hai ye ques aacha samaj aa gaya dry run karo nahi
