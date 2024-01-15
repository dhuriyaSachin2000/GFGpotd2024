class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        vector<int> res;
        unordered_set<int> set;
        int r=M;
        int c=N;
        
        for(int i=0;i<r;i++){
            int indx=0;
            for(int j=0;j<c;j++){
                 indx += matrix[i][j] * pow(2, c-1-j);
            }
             if (set.find(indx) != set.end()) {
              res.push_back(i);
        }
        else {
            set.insert(indx);
        }
        }
        return res;
      
    } 
};