class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int lt=0;
        int sum=0;
        int n=nums.size();
        int minLen=INT_MAX;
        for(int rt=0;rt<n;rt++){
            sum+=nums[rt];
            while(sum>=target){
                minLen=min(minLen,rt-lt+1);
                sum-=nums[lt];
                lt++;
            }
        }
        return(minLen==INT_MAX)? 0 : minLen;
    }
};