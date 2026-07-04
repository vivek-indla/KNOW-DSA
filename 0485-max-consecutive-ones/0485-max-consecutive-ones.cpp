class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int iterator=0;
        int limit=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                iterator++;
            }
            else{
                iterator=0;
            }
            limit=max(limit,iterator);
        }
        return limit;
    }
};