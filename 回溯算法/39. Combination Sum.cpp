class Solution {
public:
    vector<vector<int>> res;
    vector<int> path;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        dfs(candidates, target, 0);
        return res;
    }

    void dfs(vector<int> candidates, int target, int i){
        if(target==0){
            res.push_back(path);
            return ;
        }

        for(int j=i;j<candidates.size() && target-candidates[j]>=0;j++){
            if(target-candidates[j]<0)
                break;

            path.push_back(candidates[j]);
            dfs(candidates, target-candidates[j], j);
            path.pop_back();
        }
    }
};