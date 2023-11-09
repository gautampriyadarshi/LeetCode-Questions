class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
        int m = mat.size();
        int sum = 0, j = 0;
        for(int i = 0; i < mat.size(); i++)
        {
            sum += mat[i][j];
            j++;
        }

        j = mat[0].size()-1;
        for(int i = 0; i < mat.size(); i++)
        {
            sum += mat[i][j];
            j--;
        }

        if(m % 2 == 0)
            return sum;
        
        sum = sum - mat[m/2][m/2];
        return sum;
    }
};