class Solution {
public:
    int findgoal(vector<int> nums,int goal){
        if(goal<0) return 0;
        int right=0,left=0,sum=0,count=0;
        while(right<nums.size()){
            sum+=nums[right];
            while(sum > goal){
                sum-=nums[left];
                left++;
            }
            count+=right-left+1;
            right++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return findgoal(nums,goal)-findgoal(nums,goal-1);
        
    }
};