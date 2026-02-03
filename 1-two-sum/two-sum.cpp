class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        // 1. Store value and original index together
        vector<pair<int, int>> indexed_nums;
        for (int i = 0; i < n; i++) {
            indexed_nums.push_back({nums[i], i});
        }
        
        // 2. Sort the pairs (this sorts by the value, but keeps the index with it)
        sort(indexed_nums.begin(), indexed_nums.end());
        
        int left = 0;
        int right = n - 1;

        while (left < right) {
            // 3. Access the value using .first
            int sum = indexed_nums[left].first + indexed_nums[right].first;
            
            if (sum == target) {
                // 4. Return the original indices using .second
                return {indexed_nums[left].second, indexed_nums[right].second};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        return {};
    }
};