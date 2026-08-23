class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;
        int sum=0;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            leftSum.push_back(sum);
            sum+=nums[i];
        }
        int rsum=0;
        for(int i=nums.size()-1;i>=0;i--){
            rightSum.push_back(rsum);
            rsum+=nums[i];
        }
        // reverse(rightSum.begin(),rightSum.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(leftSum[i]-rightSum[n-i]));
        }
        return ans;
    }
};