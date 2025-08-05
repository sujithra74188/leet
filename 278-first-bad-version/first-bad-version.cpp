// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int low = 1, high = n;
        while (low < high) {
            int mid = low + (high - low) / 2; // avoids overflow
            if (isBadVersion(mid)) {
                high = mid; // mid might be the first bad version
            } else {
                low = mid + 1; // first bad version is after mid
            }
        }
        return low; // low == high, and it's the first bad version
    }
}; 