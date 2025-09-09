class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        int element =0;
        for(int i=0;i<n;i++){ // this loop for finding the element
            if(count==0){
            count=1;
            element=arr[i];
            }
        
       else if(arr[i]==element){
            count++;
        }
        else{
            count--;
        }
        } 
        int count1=0;
        // this loop to find how many times element present in array and it satisfied the value
        for(int i=0;i<n;i++){
            if(arr[i]==element){
            count1++;
            }
            if(count1>n/2){
                return element;

            }
        }
             return -1;
    }
};