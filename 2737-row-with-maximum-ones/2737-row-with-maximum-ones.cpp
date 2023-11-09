class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) 
    {
        unordered_map<int, int> mp;
        int maxi = 0;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                if(mat[i][j] == 1)
                    mp[i]++;
            }
            maxi = max(maxi, mp[i]);
        }

        vector<int> ans;
        for(auto x: mp)
        {
            if(ans.size() == 2 && maxi == x.second)
            {
                if(x.first < ans[0])
                {
                    ans.clear();
                    ans.push_back(x.first);
                    ans.push_back(x.second);
                }
            }
            else if(maxi == x.second)
            {
                ans.push_back(x.first);
                ans.push_back(x.second);
            }
        }
        return ans;
    }
};