class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k > n) return -1;
        long long  mn=bloomDay[0];
        for(int i=0;i<n;i++){
            if(bloomDay[i]>mn){
                mn=bloomDay[i];
            }
        }
        long low=1,high=mn;
        while(low<=high){
            long long mid= low + (high-low)/2;
            int count=0;
            int bouquet=0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    count++;
                    if(count==k){
                        bouquet++;
                        count=0;
                    }
                }
                else{
                    count=0;
                }    
            }
            if(bouquet>=m){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};