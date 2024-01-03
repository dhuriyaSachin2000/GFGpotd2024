class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        map<int,int> f;
        
        for(int i = 0; i < nums.size(); i++){
            int cur = nums[i] % k;
            int need = (k - cur) % k;
            
            if(f.count(need)){
                --f[need];
                
                if(f[need] == 0)
                    f.erase(need);
            }
            else{
                ++f[cur];
            }
        }
        
        return f.size() == 0;
    }
};