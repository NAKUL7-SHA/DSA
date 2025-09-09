class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
        
        int countzero=0,countone=0,counttwo=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) countzero++;
             else if(a[i]==1) countone++;
              else counttwo++;

        }
        for(int i=0;i<countzero;i++){
            a[i]=0;
        }
         for(int i=countzero;i<countzero+countone;i++){
            a[i]=1;
        }
         for(int i=countzero+countone;i<n;i++){
            a[i]=2;
        }


    
    }
};