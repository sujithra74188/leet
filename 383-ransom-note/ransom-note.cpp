class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      // Array to store the count of each character (26 lowercase letters)
        int count[26] = {0};
        // Count each character in magazine
        for (char c : magazine) {
            count[c - 'a']++;
        }
        // Check if ransomNote can be constructed
        for (char c : ransomNote) {
            if (--count[c - 'a'] < 0) {
                return false; // Not enough of character c in magazine
            }
        }
        return true; // All characters in ransomNote are present in magazine
    }
};   