class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        int start = 0, maxLen = 1;
        int n = s.size();
        auto expandAroundCenter = [&](int left, int right) {
            while (left >= 0 && right < n && s[left] == s[right]) {
                if (right - left + 1 > maxLen) {
                    start = left;
                    maxLen = right - left + 1;
                }
                --left;
                ++right;
            }
        };
        for (int i = 0; i < n; ++i) {
            expandAroundCenter(i, i);  
            expandAroundCenter(i, i + 1); 
        }
        return s.substr(start, maxLen);
    }
};
