class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    
    vector<vector<int>> combinationSum3(int k, int n) {
        dfs(k, n, 1);
        return res;
    }

    void dfs(int k, int target, int i){
        if(target==0 && k==0){
            res.push_back(path);
            return ;
        }

        for(int j=i; j<10 && k>0;j++){
            path.push_back(j);
            dfs(k-1, target-j, j+1);
            path.pop_back();
        }
    }
};