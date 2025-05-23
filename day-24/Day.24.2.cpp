class Solution {
public:
    int calculate(string s) {
        int result = 0; 
        int num = 0;    
        int sign = 1;   
        stack<int> st;  
        for (int i = 0; i < s.length(); ++i) {
            char ch = s[i];
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            } else if (ch == '+') {
               
                result += sign * num;
                num = 0;    
                sign = 1;   
            } else if (ch == '-') {
               
                result += sign * num;
                num = 0;    
                sign = -1; 
            } else if (ch == '(') {
              
                st.push(result);
                st.push(sign);
                result = 0; 
                sign = 1;  
            } else if (ch == ')') {
                
                result += sign * num;
                num = 0; 
                result *= st.top(); st.pop();  
                result += st.top(); st.pop(); 
            }
        }
        result += sign * num;
        return result;
    }
};
