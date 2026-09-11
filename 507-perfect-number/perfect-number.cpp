class Solution {
public:
    bool checkPerfectNumber(int num) {
        int k=num;
        int sum=0;
        
        for(int i=1;i<num;i++){
            int j=i;
            if(k%j==0){
                sum+=j;
            }

          
            



        }
        if(sum==num){
            return true;
        }
        else{
            return false;
        }
        

        
    }
};