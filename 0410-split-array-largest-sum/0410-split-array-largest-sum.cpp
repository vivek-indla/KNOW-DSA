class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        long long sum=nums[0];
        int mx=nums[0];
        for(int i=1;i<n;i++){
            sum+=nums[i];
            mx=max(mx,nums[i]);
        }
        long long low=mx,high=sum;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int stuSum=0;
            int stu=1;
            for(int i=0;i<n;i++){
                if(stuSum+nums[i]<=mid){
                    stuSum+=nums[i];
                }
                else{
                    stu++;
                    stuSum=nums[i];
                }
            }
            cout<<mid<<" "<<stu<<" "<<stuSum<<endl;
            if(stu>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};