class Solution {
public:
    int findMin(vector<int>& nums) {
        int mnv=nums[0];
        int left=0,right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left=mid+1;
            }
            else{
                mnv=min(mnv,nums[mid]);
                right=mid-1;
            }
        }
        return mnv;
    }
};