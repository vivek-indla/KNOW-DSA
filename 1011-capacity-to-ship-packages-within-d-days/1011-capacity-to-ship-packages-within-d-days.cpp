class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long high=0;
        int n=weights.size();
        int mx=weights[0];
        for(int i=0;i<n;i++){
            high+=weights[i];
            mx=max(weights[i],mx);
        }
        long long low=mx;
        while(low<=high){
            long long mid=low +(high-low)/2;
            int sum=weights[0],day=1;
            for(int i=1;i<n;i++){
                sum+=weights[i];
                // cout<<"Sum:"<<sum<<" ";
                if(sum<=mid){
                    continue;
                }
                else{
                    sum=weights[i];
                    day++;
                }
                
            }
            // cout<<mid<<" "<<day<<endl;
            if(day<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};