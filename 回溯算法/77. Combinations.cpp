class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    vector<vector<int>> combine(int n, int k) {
        backtrack(n, k, 0, 0);
        return ans; 
    }

    void backtrack(int n, int k, int level, int idx){
        if(level==k){
            ans.push_back(tmp);
            return;
        }

        for(int j=idx;j<n+1-k+tmp.size();j++){
            tmp.push_back(j+1);
            backtrack(n, k, level+1, j+1);
            tmp.pop_back();
        }
    }
};