class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> hashh;
        for(int i:nums){
            hashh[i]++;
        }
        for(const auto& i: hashh){
            if(i.second>1){
                return true;
            }
        }
        return false;
    }
};