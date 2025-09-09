#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        map<int ,int> mpp;
        for(int i=0;i<n;i++){
            int a=arr[i];
            int more_needed=target-a;
            if(mpp.find(more_needed)!=mpp.end()){
                return {mpp[more_needed],i};

            }
            mpp[a]=i;

        }
        return {-1,-1};
        
    }
};