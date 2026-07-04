class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> hashh;
        for(int i:nums){
            hashh[i]++;
        }
        int ans=-1;
        for(auto &i : hashh){
            if(i.second > n/2){
                ans=i.first;
            }
        }
        return ans;
    }
};