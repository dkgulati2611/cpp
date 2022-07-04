class Solution {
public:
    void generate(vector<int> &temp, vector<bool> &visited, vector<int> &nums, vector<vector<int> > &result)
    {
        if (temp.size() == nums.size())
        {
            result.push_back(temp);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (visited[i] == false)
            {
                visited[i] = true;
                temp.push_back(nums[i]);
                generate(temp, visited, nums, result);
                temp.pop_back();
                visited[i] = false;
            }
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) { 
        vector<vector<int> > result;
        vector<int> temp;
        vector<bool> visited(nums.size(), false);
        generate(temp, visited, nums, result);
        return result;
    }
};