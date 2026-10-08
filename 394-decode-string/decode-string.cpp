class Solution {
public:
    string decodeString(string s){
        stack<int> numstack;
        stack<string> strstack;
        int num=0;
        string curr="";
        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+ch-'0';
            }
            else if(ch=='['){
                numstack.push(num);
                strstack.push(curr);
                num=0;
                curr="";
            }
            else if(ch==']'){
                int repeat=numstack.top(); numstack.pop();
                string prev=strstack.top(); strstack.pop();
                string temp="";
                for(int i=0;i<repeat;i++){
                    temp+=curr;
                }
                curr=prev+temp;
                
            }
            else{
                curr+=ch;
            }


        }
        return curr;
        
    }
};