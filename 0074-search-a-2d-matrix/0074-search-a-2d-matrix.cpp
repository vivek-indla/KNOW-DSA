class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int low=0;
        int high=row-1;
        while(low<=high){
            int mid=low +(high-low)/2;
            // cout<<first[mid]<<" "<<endl;
            if(matrix[mid][0]==target){
                return true;
            }
            else if(matrix[mid][0]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(high<0){
            return false;
        }
        // cout<<matrix[high][0]<<" "<<matrix[0].size();
        int start=0,end=col-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(matrix[high][mid]==target){
                return true;
            }
            else if(matrix[high][mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};