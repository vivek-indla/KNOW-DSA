class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> hashh;
        int left=0,maxlen=0;
        for(int i=0;i<s.length();i++){
            if(hashh.find(s[i])!=hashh.end()){
                left=max(left,hashh[s[i]]+1);
            }
            hashh[s[i]]=i;
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};