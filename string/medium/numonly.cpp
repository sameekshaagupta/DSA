class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.length()&& s[i]==' '){
            i++;
        }
        int result=0;
        int sign=1;
        if(i<s.length()&&(s[i]=='+'|| s[i]=='-')){
            sign = (s[i]=='-') ? -1 : 1;
            i++;
        }
        while(i<s.length() && isdigit(s[i])){
            result=result*10+(s[i]-'0');
            if(sign*result<=INT_MIN){
                return INT_MIN;
            }
            else if(sign*result>=INT_MAX){
                return INT_MAX;
            }
            i++;
        }
        return static_cast<int>(sign*result);
    }
};