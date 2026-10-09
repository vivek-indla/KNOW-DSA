class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr=nums1;
        for(int i=0;i<nums2.size();i++){
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(),arr.end());
        int totalSize=arr.size();
        if(totalSize%2!=0){
            int mid=totalSize/2;
            return (arr[mid]);
        }
        int mid=totalSize/2;
        return ((double)arr[mid]+arr[mid-1])/2;
    }
};