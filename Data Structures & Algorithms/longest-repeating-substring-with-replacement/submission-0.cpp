class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxCount = 0, count[26] = {0}, longest = 0;
        for(int r = 0, l = 0; r < s.size(); ++r){
            count[s[r] - 'A'] +=1;
            maxCount = max(maxCount, count[s[r] - 'A']);
            while ((r-l+1) - maxCount > k){
            count[s[l] - 'A'] -= 1;
            ++l;
        }
        longest = max(longest, r -l +1);
    }
    return longest;
        
    }
};
