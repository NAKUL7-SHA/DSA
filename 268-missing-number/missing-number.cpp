class Solution {
public:
    int missingNumber(vector<int>& arr) {
       /* int n=arr.size();
        double sum=(n*(n+1))/2;
        int add=0;
        for(int i=0;i<n;i++){
             add+=arr[i];
        }
        return sum-add;
        */
        // onther method hashing
        int n=arr.size();
         vector<int> hash(n + 1, 0);
        for(int i=0;i<n;i++){
            hash[arr[i]]=1;

        }
        for(int i=0;i<n+1;i++){
            if(hash[i]==0){
                return i;

            }
        }
        return -1;
        
    }
    
};