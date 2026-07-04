class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        for(int i=0;i<m;i++){
            result.push_back(nums1[i]);
        }
        for(int i:nums2){
            result.push_back(i);
        }
        sort(result.begin(),result.end());
        nums1.clear();
        for(int i:result){
            nums1.push_back(i);
        }
    }

};