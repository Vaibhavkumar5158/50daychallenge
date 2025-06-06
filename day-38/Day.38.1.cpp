class Solution {
public:
    // valid character: either a number or an alphabet
    bool isValidCharacter(char ch){
        if(ch >= 'A' && ch <= 'Z'){
            return true;
        }
        if(ch >= 'a' && ch <= 'z'){
            return true;
        }
        if(ch >= '0' && ch <= '9'){
            return true;
        }
        return false;
    }
      // this function removes every character except numbers and alphabets,also it
      // converts all alphabets into lowercase
    string normaliseString(string &s){

        string newStr = "";
        for(int i=0; i<s.length(); i++){
            char ch  = s[i];
            if(isValidCharacter(ch)){
                if(ch >= 'A' && ch <= 'Z'){
                    ch = ch-'A'+'a';
                }
                newStr.push_back(ch);
            }
           
        }
         return newStr;
    }

    bool isPalindrome(string s) {
        string newStr =  normaliseString(s);
        int i = 0;
        int j = newStr.length()-1;
        while(i<=j){
            if(newStr[i] != newStr[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;    
    }
};




