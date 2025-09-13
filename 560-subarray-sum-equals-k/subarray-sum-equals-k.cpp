class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
             unordered_map<long long, int> presumMap;
        long long sum = 0;
        int count = 0;

        presumMap[0] = 1; // base case

        for (int num : arr) {
            sum += num;

            long long rem = sum - k;
            if (presumMap.find(rem) != presumMap.end()) {
                count += presumMap[rem];
            }

            presumMap[sum]++;
        }

        return count;
    }
};