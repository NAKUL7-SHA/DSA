class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i=left;i<=right;i++){
            int k=i;
            int j=i;

            while(j){
                int n=j%10;
                if(n==0 || k%n!=0 ){
                    break;


                }
                j=j/10;
                


            }
            if(j==0){
                 arr.push_back(k);

            }
           
        }
        return arr;

        
    }
};