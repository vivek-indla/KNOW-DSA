class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int k=2;
        while(k--){
            for(int i:nums){
                ans.push_back(i);
            }
        }
        return ans;
    }
};