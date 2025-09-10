class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,0);
// arr=[3,-2,1,-5,2,-4] posstive value 0 se start ho rhi hai negative 1 se
int posind=0,negind=1;
for(int i=0;i<n;i++){
    if(arr[i]>0){
        ans[posind]=arr[i];
        posind+=2;
    }
    else{
        ans[negind]=arr[i];
        negind+=2;
    }
}
return ans;
    }
};