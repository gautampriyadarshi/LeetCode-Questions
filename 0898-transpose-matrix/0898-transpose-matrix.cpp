class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> ans(n, vector<int>(m, -1));
        int row = 0, col = 0;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                ans[row][col] = matrix[i][j];
                row++;
            }
            col++;
            row = 0;
        }
        return ans;
    }
};