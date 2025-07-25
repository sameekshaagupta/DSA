class Solution {
public:
    int maxDepth(string s) {
        int maxdepth=0;
        int current=0;
        for(char c:s){
            if(c=='('){
                current++;
                maxdepth=max(current,maxdepth);
            }else if(c==')'){
                current--;

            }
        }
        return maxdepth;
    }
};