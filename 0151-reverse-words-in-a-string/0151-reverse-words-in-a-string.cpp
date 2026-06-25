class Solution {
public:
    string reverseWords(string s) {
          int n = s.length();
       //1. reverse whole string
        
        reverse(s.begin(), s.end());

        int i = 0;
        //hero honge hamare l and r jo revrese karenge words ko
        int l = 0, r = 0; 


        while(i < n) {
            while(i < n && s[i] != ' ') { //i ko agar char dikha to r ko dega and i++ and r++
                s[r++] = s[i++];
            }
            // abh i ko space mil gayya toh r tu reverse kar de word
            if(l < r) { //l     r
                reverse(s.begin()+l, s.begin()+r);
                
                // r apne pass ek space rakhe ga 
                s[r] = ' ';
                r++;
                
                l = r;
            }
            
            i++; //y eto badhta rahega
        }
        
        s = s.substr(0 , r-1);
        
        return s;
    }
};