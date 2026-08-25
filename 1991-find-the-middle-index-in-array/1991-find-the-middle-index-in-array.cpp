class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int lsum=0,rsum=0,total=0;
        for(int i:nums){
            total+=i;
        }
        for(int i=0;i<nums.size();i++){
            rsum=total-lsum-nums[i];
            if(rsum == lsum){
                return i;
            }
            lsum+=nums[i];
        }
        return -1;
    }
};