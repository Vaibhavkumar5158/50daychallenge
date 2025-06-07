class Solution {
public:
    string removeDuplicates(string s) {

        string ans = "";

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            // 2 option
            // 1) insert kardo -> ch and rightmost different hoga or ans empty
            // hoga
            //  2) DONT INSERT AND REMOve rightmost from ans – ch and rightmost
            //  same hoga

            if (ans.empty()) {
                ans.push_back(ch);
            } else if (ch != ans.back()) {  //ans.back -> rightmost char ko nikalne ke liye  
                ans.push_back(ch);
            } else {
                // ch and rightmost character in ans is same
                // remove the rightmost character
                ans.pop_back();     //isme kuch paas karne ki zaurat nahi hai khusde hi pop karega piche se 
            }
        }
        return ans;
    }
};






