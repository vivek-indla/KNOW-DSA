class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> hashh;

        for (int i = 0; i < nums.size(); i++) {

            if (hashh.find(nums[i]) != hashh.end()) {
                if (i - hashh[nums[i]] <= k)
                    return true;
            }

            // Always update the latest index
            hashh[nums[i]] = i;
        }

        return false;
    }
};