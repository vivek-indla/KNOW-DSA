class Solution {
public:
    string reverseVowels(string s) {
        string vowels;
        unordered_set<char> set1={'a','e','i','o','u','A','E','I','O','U'};
        int left=0;
        int right=s.length()-1;
        while(left<=right){
            if(set1.find(s[left])!=set1.end() && set1.find(s[right])!=set1.end()){
                    swap(s[left],s[right]);
                    left++;
                    right--;
            }
            else if(set1.find(s[left])==set1.end()){
                left++;
            }
            else{
                right--;
            }
        }
        return s;
    }
};