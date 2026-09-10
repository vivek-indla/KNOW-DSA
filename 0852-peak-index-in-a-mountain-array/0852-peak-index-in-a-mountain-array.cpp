class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n=nums.size()-1;
        if(nums.size()==1) return 0;
        int left=0,right=nums.size()-1;
        while(left<right){
            int middle=left+(right-left)/2;
            if(nums[middle]>nums[middle+1]){
                right=middle;
            }
            else{
                left=middle+1;
            }
        }
        return left;
    }
};