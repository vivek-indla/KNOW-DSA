class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int right=0,left=0,maxlen=0;
        map<int,int> hashh;
        while(right<nums.size()){
            hashh[nums[right]]++;
            if(hashh.size()>2){
            hashh[nums[left]]--;
            if(hashh[nums[left]]==0)
                hashh.erase(nums[left]);    
            left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};