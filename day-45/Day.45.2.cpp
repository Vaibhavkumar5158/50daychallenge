class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustScore(n + 1, 0);
        
        for (const auto& relation : trust) {
            int a = relation[0];
            int b = relation[1];
            trustScore[a]--; // a trusts someone -> decrease score
            trustScore[b]++; // b is trusted -> increase score
        }
        
        for (int i = 1; i <= n; ++i) {
            if (trustScore[i] == n - 1)
                return i;
        }
        
        return -1; // no judge found
    }
};
