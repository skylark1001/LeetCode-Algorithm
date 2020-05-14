class Solution {
public:
    vector<vector<int>> ans;
    vector<int> tmp;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> vis(nums.size(), false);
        back(nums, 0, vis);
        return ans;
    }

    void back(vector<int>& nums, int i, vector<bool>& vis){
        if(i==nums.size()){
            ans.push_back(tmp);
            return;
        }

        for(int j=0;j<nums.size();j++){
            if(!vis[j]){
                tmp.push_back(nums[j]);
                vis[j] = true;
                back(nums, i+1, vis);
                vis[j] = false;
                tmp.pop_back();
            }
        }
    }
};