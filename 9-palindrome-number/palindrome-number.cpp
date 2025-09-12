class Solution {
public:
    bool isPalindrome(int n) {
        long long rev=0;
        int orignal=n;
        if (n<0) return false;
        while(n>0){
        int rem=n%10;
         rev=rev*10+rem;
           n=n/10;
        
        } 
        if(rev==orignal) return true;
        else return false; 

        
        
    }
};