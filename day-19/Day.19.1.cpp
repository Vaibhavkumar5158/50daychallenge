class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            // If it's an opening bracket, push it to stack
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                // If stack is empty, there's no opening bracket to match
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                // Check for matching pair
                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // Stack should be empty if all brackets matched
        return st.empty();
    }
};
