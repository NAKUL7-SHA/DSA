class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        if(arr.size()==0) return 0;
        sort(arr.begin(),arr.end());
        int largest=1,count=0,last_smaller=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]-1==last_smaller){
                count++;
                last_smaller=arr[i];

            }
            else if(last_smaller != arr[i]){
                count =1;
                last_smaller=arr[i];


            }
            largest=max(largest,count);
        }
        return largest;
        
    }
};