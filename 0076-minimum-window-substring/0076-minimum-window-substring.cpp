class Solution {
public:
    string minWindow(string s, string t) {
        int hashh[256]={0};
        for(int i=0;i<t.size();i++){
            hashh[t[i]]++;
        }
        int right=0,left=0,sIndex=-1,minlen=INT_MAX,count=0;
        while(right<=s.size()){
            if(hashh[s[right]]>0){
                count++;
            }
            hashh[s[right]]--;
            while(count==t.size()){
                if(right-left+1 < minlen){
                    minlen=right-left+1;
                    sIndex=left;
                }
                hashh[s[left]]++;
                if(hashh[s[left]]>0){
                    count--;
                }
                left++;
            }
            right++;
        }
        return sIndex==-1?"":s.substr(sIndex,minlen);
    }
};