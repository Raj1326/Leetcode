class Solution {
public:
    int myAtoi(string s) {
        long result=0;
        int flag=0;
        bool neg = false;
        for(int i =0; i < s.size(); i++){
            if(s[i] ==' ' && flag==0)
                continue;
            else if((s[i]== '-' || s[i] =='+')&& flag==0){
                neg = s[i]=='-'? true : false;
                flag =1;
            }
            else if(isdigit(s[i])){
                flag =1;
                if((result> INT_MAX/10) || (result==(INT_MAX/10) && s[i]>'7')){
                    return neg? INT_MIN: INT_MAX;
                }
                result = result *10 + (s[i]-'0');
            }
            else 
                break;
        }
        return neg ? (result*-1) : result ;
    }
};