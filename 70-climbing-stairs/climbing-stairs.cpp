class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;

        int first = 1;    // Ways to reach step 1
        int second = 2;   // Ways to reach step 2
        int total = 0;

        for (int i = 3; i <= n; ++i) {
            total = first + second; // sum of ways to reach previous two steps
            first = second;
            second = total;
        }

        return total;
    }
};
