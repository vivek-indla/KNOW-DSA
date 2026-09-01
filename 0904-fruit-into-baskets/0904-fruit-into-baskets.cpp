class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // int left=0,right=0,maxlen=0;
        // map<int,int> hashh;
        // while(right<fruits.size()){
        //     hashh[fruits[right]]++;
        //     while(hashh.size()>2){
        //         hashh[fruits[left]]--;
        //         if(hashh[fruits[left]]==0) 
        //             hashh.erase(fruits[left]);
        //         left++;
        //     }
        //     maxlen=max(maxlen,right-left+1);
        //     right++;
        // }
        // return maxlen;
        // better approach time: O(2N) and space:O(3)

        //optimal approach time: O(N) and space:O(3)
        int left=0,right=0,maxlen=0;
        map<int,int> hashh;
        while(right<fruits.size()){
            hashh[fruits[right]]++;
            if(hashh.size()>2){
                hashh[fruits[left]]--;
                if(hashh[fruits[left]]==0) 
                    hashh.erase(fruits[left]);
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};