class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int sum=0,count=0;
        unordered_map<int,int> preSumMap;
        preSumMap[0]=1;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(preSumMap.find(sum-k)!=preSumMap.end()){
                count+=preSumMap[sum-k];
            }
            preSumMap[sum]++;
        }
        return count;
    }
};