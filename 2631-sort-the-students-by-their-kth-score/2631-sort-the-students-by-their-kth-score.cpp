class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) 
    {
        vector<vector<int>> ans;
        vector<pair<int, int>> v;
        int n=score.size();
        int m=score[0].size();

        for(int i = 0; i < n; i++)
        {
            v.push_back(make_pair(score[i][k],i));
        }

        sort(v.begin(),v.end());

        for(int i=n-1; i>=0; i--)
        {
            ans.push_back(score[v[i].second]);
        }
        return ans;
    }
};