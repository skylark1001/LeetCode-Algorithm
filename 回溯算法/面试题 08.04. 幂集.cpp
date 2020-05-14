class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int bin = pow(2, nums.size());
        for(int i=0;i<bin;i++){
            vector<int> tmp;
            for(int j=0;j<nums.size();j++){
                if((i>>j)&1 == 1){
                    tmp.push_back(nums[j]);
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};