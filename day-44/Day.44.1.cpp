class Solution {
public:
    int maxVowels(string s, int k) {
        string v= "aeiou";  //vowels
        int count = 0; int ans = 0;

        for(int i = 0; i<s.size(); i++){
            if(v.find(s[i]) != -1) count++;   // for finding vowels in s
            if(i>=k && v.find(s[i-k]) != -1) count--;
            ans = max(ans,count);
        }
        return ans;   
    }
};