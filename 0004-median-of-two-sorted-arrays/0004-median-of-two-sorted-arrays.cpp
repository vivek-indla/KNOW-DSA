class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // vector<int> arr=nums1;
        // for(int i=0;i<nums2.size();i++){
        //     arr.push_back(nums2[i]);
        // }
        // sort(arr.begin(),arr.end());
        // int totalSize=arr.size();
        // if(totalSize%2!=0){
        //     int mid=totalSize/2;
        //     return (arr[mid]);
        // }
        // int mid=totalSize/2;
        // return ((double)arr[mid]+arr[mid-1])/2;

        vector<int> arr;
        int i=0,j=0;
        while(i<nums1.size()&& j<nums2.size()){
            if(nums1[i]<nums2[j]){
                arr.push_back(nums1[i]);
                i++;
            }
            else{
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            arr.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            arr.push_back(nums2[j]);
            j++;
        }
        int totalSize=arr.size();
        if(totalSize%2!=0){
            int mid=totalSize/2;
            return (arr[mid]);
        }
        int mid=totalSize/2;
        return ((double)arr[mid]+arr[mid-1])/2;
    }
};