class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         //better approach time: O(2n) and space:O(n)
        // int right=0,left=0,maxlen=0,zeros=0;
        // int n=nums.size()-1;
        // while(right<n){
        //     if(nums[right]==0) zeros++;
        //     while(zeros > k){
        //         if(nums[left]==0) zeros--;
        //         left++;
        //     }
        //     maxlen=max(maxlen,right-left+1);
        //     right++;
        // }
        // return maxlen;

         //optimal approach time:O(N) and space:O(1)
        int right=0,left=0,maxlen=0,zeros=0;
        int n=nums.size()-1;
        while(right<=n){
            if(nums[right]==0) zeros++;
            if(zeros > k){
                if(nums[left]==0) zeros--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};