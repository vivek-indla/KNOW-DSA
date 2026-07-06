class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set1;
        for(const auto& i:nums){
            set1.insert(i);
        }
        if(nums.size()==set1.size()){
            return false;
        }
        return true;
    }
};