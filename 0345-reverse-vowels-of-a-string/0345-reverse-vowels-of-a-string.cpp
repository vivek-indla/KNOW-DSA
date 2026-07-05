class Solution {
public:
    string reverseVowels(string s) {
        // unordered_set<char> set1={'a','e','i','o','u','A','E','I','O','U'};
        // int left=0;
        // int right=s.length()-1;
        // while(left<=right){
        //     if(set1.find(s[left])!=set1.end() && set1.find(s[right])!=set1.end()){
        //             swap(s[left],s[right]);
        //             left++;
        //             right--;
        //     }
        //     else if(set1.find(s[left])==set1.end()){
        //         left++;
        //     }
        //     else{
        //         right--;
        //     }
        // }
        // return s; 
        // above is my approach with 4ms let's learn more optimal approach
        string word = s;
        int start = 0;
        int end = s.length() - 1;
        string vowels = "aeiouAEIOU";
        while (start < end) {
            while (start < end && vowels.find(word[start]) == string::npos) {
                start++;
            }
            while (start < end && vowels.find(word[end]) == string::npos) {
                end--;
            }
            swap(word[start], word[end]);
            start++;
            end--;
        }
        return word;
    }
};