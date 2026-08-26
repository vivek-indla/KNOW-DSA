class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    // int maxlen=0;
    // for(int i=0;i<s.size();i++){
    //     int hash[255]={0};
    //     for(int j=i;j<s.size();j++){
    //         if(hash[s[j]]==1) break;
    //         maxlen=max(maxlen,j-i+1);
    //         hash[s[j]]=1;
    //     }
    // }
    // return maxlen;
    // brute force approach
    // optimal approach is 
    int mapp[256];
    for(int i=0;i<256;i++){
        mapp[i]=-1;
    }
    int left=0,right=0,maxlen=0;
    int n=s.size();
    while(right < n){
        if(mapp[s[right]]!=-1 && mapp[s[right]]>=left){
                left=mapp[s[right]]+1;
        }
        maxlen=max(maxlen,right-left+1);
        mapp[s[right]]=right;
        right++;
    }
    return maxlen;
    }
};