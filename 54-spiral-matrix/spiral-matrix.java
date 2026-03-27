import java.util.*;

class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {

        ArrayList<Integer> arr = new ArrayList<>();

        int n = matrix.length;
        int m = matrix[0].length;

        int frow = 0, lrow = n - 1;
        int fcol = 0, lcol = m - 1;

        while (frow <= lrow && fcol <= lcol) {

            // top row
            for (int j = fcol; j <= lcol; j++) {
                arr.add(matrix[frow][j]);
            }
            frow++;

            // right column
            for (int i = frow; i <= lrow; i++) {
                arr.add(matrix[i][lcol]);
            }
            lcol--;

            if (frow <= lrow) {
                // bottom row
                for (int j = lcol; j >= fcol; j--) {
                    arr.add(matrix[lrow][j]);
                }
                lrow--;
            }

            if (fcol <= lcol) {
                // left column
                for (int i = lrow; i >= frow; i--) {
                    arr.add(matrix[i][fcol]);
                }
                fcol++;
            }
        }

        return arr;
    }
}