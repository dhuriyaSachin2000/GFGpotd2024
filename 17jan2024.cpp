class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        solve(arr,0,n,st);
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
    void solve(vector<int>&a,int idx, int n,set<vector<int>>&st){
        if(idx==n){
            st.insert(a);return;
        }
        for(int i=idx;i<n;i++){
            swap(a[i],a[idx]);
            solve(a,idx+1,n,st);
            swap(a[i],a[idx]);
        }
    }
};