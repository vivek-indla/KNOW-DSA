int find(vector<int>& nums,int k){
    int right=0,left=0,sum=0,count=0;
    while(right<nums.size()){
        sum+=nums[right]%2;
        while(sum>k){
            sum-=nums[left]%2;
            left++;
        }
        count+=right-left+2;
        right++;
    }
    return count;
}
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return find(nums,k) - find(nums,k-1);
    }
};