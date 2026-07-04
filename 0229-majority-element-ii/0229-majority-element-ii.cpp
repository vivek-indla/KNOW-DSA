class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int,int> hashh;
        for(int i: nums){
            hashh[i]++;
        }
        for(auto& i:hashh){
            if(i.second> n/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};