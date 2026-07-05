class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        // int count=0;
        // int n=nums.size()-1;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<=n;j++){
        //         if(nums[i]+nums[j]<target){
        //             count++;
        //         }
        //     }
        // }
        // return count;
        // above is my approach time:O(n)

        //below have the complexity of time:O(n logn)
        sort(nums.begin(),nums.end());
        int count=0;
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            if(nums[left]+nums[right]<target){
                count+=right-left;
                left++;
            }
            else{
                right--;
            }
        }
        return count;
    }
};