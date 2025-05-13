class Solution {
public:
    int reverse(int x) {
        int reversedNum = 0;
        
        while (x != 0) {
            int lastDigit = x % 10;
            
            if (reversedNum > INT_MAX / 10 || (reversedNum == INT_MAX / 10 && lastDigit > 7)) {
                return 0; 
            }
            if (reversedNum < INT_MIN / 10 || (reversedNum == INT_MIN / 10 && lastDigit < -8)) {
                return 0; 
            }
            
            reversedNum = reversedNum * 10 + lastDigit;
            x /= 10;
        }
        
        return reversedNum;
    }
};
