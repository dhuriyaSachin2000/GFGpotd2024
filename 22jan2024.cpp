class Solution
{
    public:
    void solve(Node * root , int s , int sum , vector<int>&v, vector<vector<int>>&ans)
    {
        if(root==NULL) return ;
        
        
        v.push_back(root->key);
        s+=root->key;
        
        if(s==sum) {
            ans.push_back(v);
          
        }
        solve(root->left , s, sum , v, ans);
        solve(root->right,s,sum,v,ans);
        s-=root->key;
        v.pop_back();
        
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<vector<int>>ans;
        vector<int>v;
        
        
        solve(root,0,sum,v,ans);
        return ans;
        
    }
};