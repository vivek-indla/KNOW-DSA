class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int left=1;
        int right=num/2;
        while(left<=right){
            long long mid=left+(right-left)/2;
            long long search=mid*mid;
            cout<<search<<endl;
            if(search==num){
                return true;
            }
            else if(search>num){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return false;
    }
};