class Solution
{
    public:
    struct comp {
    bool operator()(const pair<double, int>& p1, const pair<double, int>& p2) {
       
        return p1.first < p2.first;
    }
};
    double fractionalKnapsack(int wt, Item arr[], int n)
    {
             priority_queue< pair<double,int> ,vector< pair<double,int>>,comp>pq;
             
            for(int i=0;i<n;i++){
                pq.push({arr[i].value/(double)arr[i].weight,arr[i].weight});
            }
          double ans=0;
          while(wt>0&&!pq.empty()){
              double a=pq.top().first;
              int b=pq.top().second;
                pq.pop();
             ans+=(min(b,wt)*a);
             wt-=min(b,wt);
           
          }
       return ans ;
    }
        
};