import java.util.*;

class Solution {
    public List<List<Integer>> generate(int numRows) {

        ArrayList<ArrayList<Integer>> arr = new ArrayList<>();

        for (int i = 0; i < numRows; i++) {

            arr.add(new ArrayList<Integer>());

            for (int j = 0; j <= i; j++) {

                if (j == 0 || j == i) {
                    arr.get(i).add(1);
                } else {
                  //  int value = arr.get(i - 1).get(j) + arr.get(i - 1).get(j - 1);
                    arr.get(i).add(arr.get(i - 1).get(j) + arr.get(i - 1).get(j - 1));
                }
            }
        }

        return new ArrayList<>(arr);
    }
}