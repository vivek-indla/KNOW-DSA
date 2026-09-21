class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        int n=time.size();
        // if(n==1) return totalTrips;
        long long mn=*min_element(time.begin(),time.end());
        long long low=1;
        long long high=mn*totalTrips;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long total=0;
            for(int i=0;i<n;i++){
                if(time[i]<=mid){
                    total+=mid/time[i];
                }
            }
            cout<<mid<<" "<<total<<endl;
            if(total>=totalTrips){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};