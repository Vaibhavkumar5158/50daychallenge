class Solution {
public:
    int findNthDigit(int n) {
       
        long long digitLength = 1;  
        long long count = 9;        
        long long start = 1;       
        while (n > digitLength * count) {
            n -= digitLength * count;  
            digitLength++;            
            count *= 10;               
            start *= 10;              
        }
        long long number = start + (n - 1) / digitLength;  
        string numberStr = to_string(number);
        int digitIndex = (n - 1) % digitLength;
        return numberStr[digitIndex] - '0'; 
    }
};
