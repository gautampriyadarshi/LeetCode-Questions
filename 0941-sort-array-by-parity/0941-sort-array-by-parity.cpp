class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int> even;
        vector<int> odd;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        int j = 0, k = 0, n = even.size();
        for(int i = 0; i < nums.size(); i++)
        {
            if(j < n)
            {
                ans.push_back(even[j]);
                j++;
            }
            else
            {
                ans.push_back(odd[k]);
                k++;
            }
        }

        even.clear();
        odd.clear();
        return ans;
    }
};