class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> track;
        backtrack(nums, 0, track, ans);
        return ans;
    }

    void backtrack(vector<int> nums, int i, vector<int>& track, vector<vector<int>>& ans){
        ans.push_back(track);
        for(int j=i;j<nums.size();j++){
            track.push_back(nums[j]);
            backtrack(nums, j+1, track, ans);
            track.pop_back();
        }
    }
};