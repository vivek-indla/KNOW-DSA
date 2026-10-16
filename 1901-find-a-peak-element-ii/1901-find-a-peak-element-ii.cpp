int findMaxRow(vector<vector<int>>& mat,int m,int mid){
    int max_ele=-1,idx=-1;
    for(int i=0;i<m;i++){
        if(mat[i][mid]>max_ele){
            max_ele=mat[i][mid];
            idx=i;
        }
    }
    return idx;
}
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int low=0,high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int  row=findMaxRow(mat,m,mid);
            int left= mid-1>=0?mat[row][mid-1]:-1;
            int right=mid+1<n?mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right){
                return {row,mid};
            }
            else if(mat[row][mid] < left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
       return {-1,-1}; 
    }
};