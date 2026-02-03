class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int ,int> mpp;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int remaining=target-a;
            if(mpp.find(remaining)!=mpp.end()){
                return {mpp[remaining],i};

            }
            mpp[a]=i;

        }
        return {-1,-1};
        
    }
};