class Solution {
public:
    int mostFrequentEven(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0)
                mp[nums[i]]++;
        }

        int ans = -1;
        int count = 0;
        for(auto x: mp)
        {
            if(count < x.second)
            {
                count = x.second;
                ans = x.first;
            }

            if(count == x.second)
                ans = min(ans, x.first);
        }
        
        return ans;
    }
};