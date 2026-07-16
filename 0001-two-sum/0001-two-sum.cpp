class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hashh;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int search=target-nums[i];
            if(hashh.find(search)!=hashh.end()){
                return {hashh[search],i};
            }
            hashh[nums[i]]=i;
        }
        return {-1,-1};
    }
};