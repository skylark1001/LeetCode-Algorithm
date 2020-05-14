class Solution {
public:
    vector<string> ans;
    string tmp = "";
    vector<string> generateParenthesis(int n) {
        dfs(n, n);
        return ans;
    }

    void dfs(int left, int right){
        if(right==0){
            ans.push_back(tmp);
            return;
        }

        if(left){
            tmp += '(';
            dfs(left-1, right);
            tmp.pop_back();
        }
        if(left<right){
            tmp += ')';
            dfs(left, right-1);
            tmp.pop_back();
        }
    }
};