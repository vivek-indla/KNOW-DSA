class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int mn=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>mn){
                mn=nums[i];
            }
        }
        // cout<<mn<<endl;
        // long long store=mn;
        int low=1,high=mn;
        while(low<=high){
            long long mid=low + (high-low)/2;
            long long sum=0;
            cout<<mid<<endl;
            for(int i=0;i<n;i++){
                sum += (nums[i] + mid - 1) / mid;
                if(sum > threshold)
                    break;
            }
            // cout<<sum<<" "<<mid<<endl;
            if(sum<=threshold){
                // store=min(store,mid);
                // cout<<"min"<<store<<endl;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};