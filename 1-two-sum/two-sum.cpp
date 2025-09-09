class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
           // code here
        int n=arr.size();
        vector<pair<int,int>>nums;
        for(int i=0;i<n;i++){
            nums.push_back({arr[i],i}); // // Store values with their original indices
        }
        int i=0,j=n-1;
       sort(nums.begin(), nums.end());
        
        while(i<j){ // this is for jab tak right left se chota hai
          int sum = nums[i].first + nums[j].first;
        if(sum==target){
         return {nums[i].second, nums[j].second}; // original indices

            
        }
        else if(sum>target){
            j--;
            
        }
        else{
            i++;
        }
            
        }
    
    return {-1,-1};
    }
};