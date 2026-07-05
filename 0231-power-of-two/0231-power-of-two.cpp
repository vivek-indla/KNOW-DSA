class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0|| n>pow(2,31)-1||n<0.0000000004656612873077392578125){
            return false;
        }
        int val=log2(abs(n));
        if(pow(2,val)==n){
            return true;
        }
        else{
            return false;
        }
    }
};