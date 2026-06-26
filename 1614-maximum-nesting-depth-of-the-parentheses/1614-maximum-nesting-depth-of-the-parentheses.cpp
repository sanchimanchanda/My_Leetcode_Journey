class Solution {
public:
    int maxDepth(string s) {
       int n = s.length();
       int open_bracket = 0;
       int result = 0;

       for(int i = 0 ; i < n ; i++){
        if(s[i] == '(' ){
            open_bracket++;
            result = max(open_bracket,result);
        }
        if(s[i] == ')'){
            open_bracket--;
        }
       }
       return result; 
    }
};