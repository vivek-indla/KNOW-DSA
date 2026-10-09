class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr=nums1;
        for(int i=0;i<nums2.size();i++){
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(),arr.end());
        for(int i:arr){
            cout<<i<<" ";
        }
        int totalSize=arr.size();
        cout<<totalSize<<endl;
        if(totalSize%2!=0){
            int mid=totalSize/2;
            return (arr[mid]);
        }
        int mid=totalSize/2;
        cout<<arr[mid]<<" "<<arr[mid-1];
        double ans=arr[mid]+arr[mid-1];
        return ans/2;
        // return (arr[mid]+arr[mid-1])/2;
    }
};