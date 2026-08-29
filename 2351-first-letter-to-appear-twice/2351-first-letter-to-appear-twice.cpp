class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> sett;
        for(int i=0;i<s.length();i++){
            if(sett.find(s[i])!=sett.end()){
                return s[i];
            }
            sett.insert(s[i]);
        }
        return -1;
    }
};