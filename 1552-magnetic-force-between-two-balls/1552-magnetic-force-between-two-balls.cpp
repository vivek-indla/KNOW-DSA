class Solution {
public:
    int maxDistance(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int low=1,high=arr[n-1];
        // cout<<low<<" "<<high<<endl;
        while(low<=high){
            int mid=low+(high-low)/2;
            int last=arr[0],countCows=1;
            for(int i=1;i<n;i++){
                if(arr[i]-last>=mid){
                    countCows++;
                    last=arr[i];
                }
            }
            // cout<<mid<<" "<<countCows<<endl; 
            if(countCows>=k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};