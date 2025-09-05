#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& a) {
        int n=a.size();
   long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        for(int i=0;i<n;i++){
            if (a[i] == first || a[i] == second || a[i] == third) continue;
            if(a[i]>first){
                third=second;
                second=first;
                first=a[i];

            }
            else if(a[i]<first && a[i]>second){
                third=second;
                second=a[i];

            }
            else if(a[i]>third){
                third=a[i];

            }
        }
     if (third == LONG_MIN) {
            return (int)first;   // fewer than 3 distinct numbers → return max
        }
        return (int)third;      
    }
};