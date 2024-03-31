class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() ==1){
            return strs[0];
        }
        string result="";
        int flag=0;
        for(int i=0;i< strs[0].length();i++){
            char ch = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i] != ch){
                    flag =1;
                    break;
                }
                
            }
            if(flag == 0 )
            result += ch;
        }
        return result;
    }
};