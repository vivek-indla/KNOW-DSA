class Solution {
public:
    int firstMatchingIndex(string s) {
        int left=0;
        int right=s.length()-1;
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