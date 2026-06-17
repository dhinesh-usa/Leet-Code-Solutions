class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        

        unordered_set<int> check;

        vector<int> ans;

        for(int i = 0; i < grid.size(); i ++)
        {

            for(int j = 0; j < grid[0].size(); j ++)
            {
                if(check.count(grid[i][j]) > 0) ans.push_back(grid[i][j]);

                check.insert(grid[i][j]);
            }
        }

        int limit = grid.size()*grid.size();

        for(int i = 1; i <= limit; i++)
        {
            if(check.count(i) == 0)
            {
                ans.push_back(i);
            }
        }

        return ans;

    }
};