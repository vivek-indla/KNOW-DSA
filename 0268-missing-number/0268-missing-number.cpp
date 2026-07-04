class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<=nums.size();i++){
            sum+=i;
        }
        int vsum=0;
        for(auto i: nums){
            vsum+=i;
        }
        return sum-vsum;
    }
};