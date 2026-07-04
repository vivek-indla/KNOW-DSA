class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int n=nums.size();
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[start]+nums[end]==target){
                result.push_back(start+1);
                result.push_back(end+1);
                break;
            }
            else if(nums[start]+nums[end]>target){
                end--;
            }
            else{
                start++;
            }

        }
        return result;
    }
};