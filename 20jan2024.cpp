class Solution
{
    public:
    int check(Node* root,int &count)
    {
        if(root==NULL)
        return 0;
        int a=check(root->left,count);
        int b=check(root->right,count);
        count+=abs(a)+abs(b);
        int h=root->key-1+a+b;
        return h;
    }
    int distributeCandy(Node* root)
    {
        int ans=0;
        int j=check(root,ans);
        return ans;
        
    }


};