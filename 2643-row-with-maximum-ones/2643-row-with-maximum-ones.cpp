class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        int max_cnt=-1,idx=-1;
        for(int i=0;i<row;i++){
            int cnt=0;
            for(int j=0;j<col;j++){
                cnt+=mat[i][j];
                if(cnt>max_cnt){
                    max_cnt=cnt;
                    idx=i;
                }
            }
        }
        return {idx,max_cnt};
    }
};