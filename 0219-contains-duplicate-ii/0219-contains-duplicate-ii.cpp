class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> hashh;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(hashh.find(num)!=hashh.end()){
                int diff=abs(hashh[num]-i);
                if(diff<=k) {
                    return true;
                }
                hashh[num]=i;
                continue;
            }
            hashh[num]=i;
        }
        return false;
    }
};