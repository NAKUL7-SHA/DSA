import java.util.*;

class Solution {
    public int[] plusOne(int[] digits) {
        int n = digits.length;
        Vector<Integer> temp = new Vector<>();

        int carry = 1;

        for (int i = n - 1; i >= 0; i--) {
            if (carry + digits[i] <= 9) {
                temp.add(carry + digits[i]);
                carry = 0;
            } else { // carry + digits[i] >= 10
                temp.add(0);
                carry = 1;
            }
        }

        if (carry == 1) temp.add(1);

        Collections.reverse(temp);

        int[] result = new int[temp.size()];
        for (int i = 0; i < temp.size(); i++) {
            result[i] = temp.get(i);
        }

        return result;
    }
}