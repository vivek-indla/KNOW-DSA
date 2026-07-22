class Solution {
public:
    int firstMatchingIndex(string s) {
        int n=s.length();
        int left=0;
        int right=n-1;
        while(left<=right){
            if(s[left]==s[right]){
                return left;
            }
            left++;
            right--;
        }
        return -1;
    }
};