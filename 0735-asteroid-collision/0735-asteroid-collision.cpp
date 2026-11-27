class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
            while(1){
            if(st.empty() || st.top()<0){
                st.push(asteroids[i]);
                break;
            }
            else{
                if(st.top()==abs(asteroids[i])){
                    st.pop();
                    break;
                }
                else if(st.top()>abs(asteroids[i])){
                    break;
                }
                else{
                    st.pop();
                }
                }
            }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};