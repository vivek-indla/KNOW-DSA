class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sup(nums2.size());
        vector<int> ans;
        map<int,int> hashh;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                sup[i]=-1;
            }
            else{
                sup[i]=st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums2.size();i++){
            hashh[nums2[i]]=sup[i];
        }
        for(int i=0;i<nums1.size();i++){
            ans.push_back(hashh[nums1[i]]);
        }
        return ans;
    }
};