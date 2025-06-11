class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
            
        vector<string> zigzag(numRows);

        int i = 0;
        int row = 0;
        bool direction = 1; // 1-> T->B
        while (true) {
            if (direction) {
                while (row < numRows && i < s.size()) {
                    zigzag[row++].push_back(s[i++]); //-7:37  top se bottom jayega isse
                }
                row = numRows - 2; // isse index 1 se start hoga back aana hai
            } else {
                while (row >= 0 && i < s.size()) {
                    zigzag[row--].push_back(s[i++]); //-4.22
                }
                row = 1;
            }
            if (i >= s.size()) break;   
            direction = !direction;
        }
        string ans = "";
        for (int i = 0; i < zigzag.size(); i++) {
            ans += zigzag[i];
        }
        return ans;
    }
};

