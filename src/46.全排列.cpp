/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > res;
        transpose(nums,0,res);
        return res;
    }

    void transpose(vector<int>& nums,int i, vector<vector<int> >& res)
    {
        if(i == nums.size())
        {
            res.push_back(nums);
        }
        for(int j = i; j < nums.size(); j++)
        {
            swap(nums[i],nums[j]);
            transpose(nums,i+1,res);
            swap(nums[i],nums[j]);
        }
    }
};
// @lc code=end

