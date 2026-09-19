class Solution {
public:
    int mySqrt(int n) {
        if(n==1) return 1;
        int right=n/2;
        int left=1;
        while(left<=right){
            long long mid=left+(right-left)/2;
            long long check=mid*mid;
            if(check==n){
                return mid;
            }
            else if(check>n){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return right;
    }
};