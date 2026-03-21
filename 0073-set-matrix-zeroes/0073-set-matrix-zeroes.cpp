class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<bool>> markers(m, vector<bool>(n, false));

         for(int i = 0;i < m;i ++)
        {
            for(int j = 0; j < n; j ++)
            {
                if(matrix[i][j] == 0)
                {
                    markers[i][j]=true;
                }
            }
        }

        for(int i = 0;i < m;i ++)
        {
            for(int j = 0; j < n; j ++)
            {
                if(markers[i][j] == true)
                {
                    for(int k = 0;k < m;k ++ )
                    {
                        matrix[k][j]=0;
                    }
                    for(int x = 0;x < n;x ++)
                    {
                        matrix[i][x]=0;
                    }
                }
            }
        }
    }
};