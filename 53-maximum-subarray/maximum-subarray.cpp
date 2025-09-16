class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
        int sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];

            if(sum>maxi){
                maxi=sum;

            }
            if(sum<0){
                sum=0;

            }
            if(sum<0) return 0; // this line for it array contain all -ve element

           

        }
   return maxi;
        
    }
};