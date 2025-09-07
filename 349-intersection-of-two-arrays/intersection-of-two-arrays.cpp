class Solution {
public:
    vector<int> intersection(vector<int>&a, vector<int>&b) {
        int n1=a.size();
        int n2=b.size();
        int i=0;
        int j=0;
        vector<int> ans;
         sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
                i++;
            }
            else if(b[j]<a[i]){
                j++;
                

            }
            else{
                if (ans.empty() || ans.back() != b[j]) {
                    ans.push_back(b[j]);
                }
                i++;
                j++;
           
            }

           
        }
        return ans;

        
    }
};