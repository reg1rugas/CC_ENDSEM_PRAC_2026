class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        // code here
        vector<int> out;
        for (vector<int> q : queries){
            int s = 0;
            for(int i = q[0]; i <= q[1]; i++){
                s += arr[i];
            }
            out.push_back(s);
        }
        
        return out;
    }
};
