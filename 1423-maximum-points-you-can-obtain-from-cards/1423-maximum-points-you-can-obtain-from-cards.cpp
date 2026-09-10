class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum=0;
        for(int i=0;i<k;i++){
            leftSum+=cardPoints[i];
        }
        int maxSum=leftSum;
        int left=k-1,right=cardPoints.size()-1;
        while(k--){
            leftSum-=cardPoints[left--];
            leftSum+=cardPoints[right--];
            maxSum=max(maxSum,leftSum);
        }
        return maxSum;
    }
};