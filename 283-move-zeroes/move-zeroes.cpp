class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;

        // store non-zero elements
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // copy non-zero values back
        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        // fill remaining with zeroes
        int nz = temp.size();
        for (int i = nz; i < n; i++) {
            nums[i] = 0;
        }
    }
};