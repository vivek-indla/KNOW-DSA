int helper(vector<int>nums,int k){
     map<int,int> hashh;
     int left=0,right=0,count=0;
     while(right<nums.size()){
        hashh[nums[right]]++;
        while(hashh.size()>k){
            hashh[nums[left]]--;
            if(hashh[nums[left]]==0) hashh.erase(nums[left]);
            left=left+1;
        }
        count+=right-left+1;
        right++;
     }
     return count;
}
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return helper(nums,k)-helper(nums,k-1);
    }
};