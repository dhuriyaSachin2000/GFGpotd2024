class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int ans=0;
        long long int s=0;
        for(int i=0;i<k;i++){
            s=s+a[i];
        }
        ans=s;
        long long int maxi=s;
        int i=0;
        int j=k;
        while(j<n){
            s=s+a[j]-a[i];
            maxi=max(s,maxi+a[j]);
            ans=max(ans,maxi);
            i++;
            j++;
        }
        return ans;
    }
};