class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        dfs(ans, n, 0, 0, s);
        return ans;
    }
    void dfs(vector<string>& ans, int n, int l, int r, string s){
        if(l>n || r>n || r>l)
            return;
        if(r==n){
            ans.push_back(s);
            return;
        }
        dfs(ans, n, l+1, r, s+'(');
        dfs(ans, n, l, r+1, s+')');
    }
};