class Solution {
public:
    void sortColors(vector<int>& nums) {
    int n=nums.size();
    int arr[n];
    int count0=0;
    int count1=0;
    int count2=0;
 for(int i=0;i<n;i++){
    if(nums[i]==0){
        count0++;
    }
     else if(nums[i]==1) {
          count1++;    
    }
   else{
    count2++;
   }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
     for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
     for(int i=count0+count1;i<n;i++){
        arr[i]=2;
    }
      for (int i = 0; i < n; i++){
            nums[i] = arr[i];
      }
    }
};