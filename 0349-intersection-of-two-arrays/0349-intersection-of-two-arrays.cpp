class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n=nums1.size();
        for(int i:nums1){
            for(int j=0;j<nums2.size();j++){
                if(i==nums2[j]){
                    result.push_back(i);
                }
            }
        }
        sort(result.begin(), result.end()); // Sort first
        auto last = unique(result.begin(), result.end()); // Move duplicates
        result.erase(last, result.end());
        return result;
    }
};