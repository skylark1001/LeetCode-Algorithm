class Solution {
public:
    vector<string> permutation(string S) {
        vector<string> ans;
        string tmp = "";
        vector<bool> vis(S.length(), false);
        backtrack(S, ans, tmp, vis);
        return ans;
    }

    void backtrack(string S, vector<string> &ans, string &tmp, vector<bool>&vis){
        if(tmp.length()==S.length()){
            ans.push_back(tmp);
            return;
        }

        for(int j=0;j<S.length();j++){
            if(vis[j])
                continue;
            vis[j] = true;
            tmp += S[j];
            backtrack(S, ans, tmp, vis);
            // tmp = tmp.substr(0, tmp.length()-1);
            tmp.pop_back();
            vis[j] = false;
        }
    }
};