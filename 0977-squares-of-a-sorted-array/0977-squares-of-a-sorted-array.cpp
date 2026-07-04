class Solution {
public:
	vector<int> sortedSquares(vector<int>& nums) {
		vector<int> result(nums.size());
        int i = 0, j = nums.size() - 1, pos = nums.size()-1;
        while(i<=j) {
            int left = nums[i]*nums[i];
            int right = nums[j]*nums[j];
            if(left>right) {
                result[pos--]=left;
                i++;
            }
            else {
                result[pos--]=right;
                j--;
            }
        }
        return result;
    }
};