class Solution {
public:
    // brute force approrch time: O(2n) and space: O(1)    
    // int longestOnes(vector<int>& nums, int k) {
    //     int left=0,right=0,maxlen=0,zeros=0;
    //     while(right<nums.size()){
    //         if(nums[right]==0) zeros++;
    //         if(zeros > k){
    //             if(nums[left]==0) zeros--;
    //             left++;
    //         }
    //         maxlen=max(maxlen,right-left+1);
    //         right++;
    //     }
    //     return maxlen;
    // }
    //optimal approach time: O(N) and space: O(1)
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,maxlen=0,zeros=0;
        while(right<nums.size()){
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