class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPiles=piles[0];
        int n=piles.size();
        int store=INT_MAX;
        for(int i=0;i<n;i++){
            if(piles[i]>maxPiles){
                maxPiles=piles[i];
            }
        }
        long long low=1,high=maxPiles;
        while(low<=high){
            long long mid=low + (high-low)/2;
            long long total=0;
            for(int i=0;i<n;i++){
                if(piles[i]<=mid) total++;
                else{
                    total+=piles[i]/mid;
                    if(piles[i]%mid!=0) total++;
                }
                // cout<<total<<endl;
            }
            // cout<<mid<<" "<<total<<endl;
            if(total<=h){
                if(mid<store){
                    store=mid;
                }
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return store;
    }
};