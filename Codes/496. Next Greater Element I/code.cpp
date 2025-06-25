class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        stack<int>st;
        unordered_map<int,int>mpp;
        for(auto num:nums2){
            while(!st.empty() && st.top()<num){
                mpp[st.top()]=num;
                st.pop();
            }
            st.push(num);
        }
        for(auto num:nums1){
            if(mpp.count(num)) ans.push_back(mpp[num]);
            else ans.push_back(-1);
        }
        return ans;
    }
};
