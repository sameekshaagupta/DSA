class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char,char> mapS2T, mapT2S;
        for(int i=0; i<s.length();i++){
            char a=s[i];
            char b=t[i];
            if(mapS2T.count(a)){
                if(mapS2T[a]!=b){
                    return false;
                }
            }else{
                mapS2T[a]=b;
            }
            if(mapT2S.count(b)){
                if(mapT2S[b]!=a){
                    return false;
                }
            }else{
                mapT2S[b]=a;
            }
        }
        return true;
    }
};