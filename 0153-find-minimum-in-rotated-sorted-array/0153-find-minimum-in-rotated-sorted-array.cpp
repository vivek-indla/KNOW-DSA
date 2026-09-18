class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        int mn=INT_MAX;
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]<=nums[right]){
                mn=min(mn,nums[mid]);
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return mn;
    }
};