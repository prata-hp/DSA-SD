class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int count=0;
        string result;
 
        for(int i = 0; i < n; i++){
          if(s[i]=='('){

            if(count>0){
              result+= s[i];
            }
            count++;
          }
          else if(s[i]==')'){
            count--;
            if(count>0){
              result+= s[i];
            }
          }
        }

        return result;
    }
};