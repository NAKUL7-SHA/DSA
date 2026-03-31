class Solution {
    public int helper(int[] arr, int target, int start, int end) {
        if (start > end) return -1;

        int mid = start + (end - start) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] > target) return helper(arr, target, start, mid - 1);
        else return helper(arr, target, mid + 1, end);
    }

    public int search(int[] nums, int target) {
        int n = nums.length;
        return helper(nums, target, 0, n - 1);
    }
}