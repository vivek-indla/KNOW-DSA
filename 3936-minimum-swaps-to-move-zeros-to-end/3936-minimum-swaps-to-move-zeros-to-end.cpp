class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            if(nums[right]==0){
                right--;
            }
            else if(nums[left]==0 && nums[right]!=0){
                count++;
                left++;
                right--;
            }
            else{
                left++;
            }
        }
        return count;
    }
};