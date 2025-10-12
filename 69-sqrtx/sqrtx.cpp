class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x; // handle small cases
        
        int start = 1, end = x, answer = 0;
        long long mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            
            if (mid * mid == x) {
                return mid; // perfect square
            } else if (mid * mid < x) {
                answer = mid;      // store possible answer
                start = mid + 1;   // search right half
            } else {
                end = mid - 1;     // search left half
            }
        }
        
        return answer;
    }
};
