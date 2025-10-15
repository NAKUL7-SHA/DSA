class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) return false;

        long long rev = 0, original = n;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        return rev == original;
    }
};

