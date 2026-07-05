class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        int i=0;
        for(int j=1;j<s.length();j++){
            score+=abs(int(s[i])-int(s[j]));
            i++;
        }
        return score;
    }
};