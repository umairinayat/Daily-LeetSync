class Solution {
public:
    string longestPalindrome(string s) {
    string result = "";
    int maxLen = 0;
    
    for (int i = 0; i < s.length(); i++) {
        // Check odd length palindromes
        expandAroundCenter(s, i, i, result, maxLen);
        // Check even length palindromes  
        expandAroundCenter(s, i, i + 1, result, maxLen);
    }
    return result;
}
void expandAroundCenter(string s, int left, int right, string& result, int& maxLen) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        int currentLen = right - left + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
            result = s.substr(left, currentLen);
        }
        left--;
        right++;
    }
}
};