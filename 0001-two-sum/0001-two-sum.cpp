class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        map<int,int> mapp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int search=target-arr[i];
            if(mapp.find(search)!=mapp.end()){
                return {mapp[search],i};
            }
            mapp[arr[i]]=i;
        }
        return {-1,-1};
    }
};