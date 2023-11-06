class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        vector<int> even;
        vector<int> odd;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++)
        {
            if(i % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        int j = 0, k = 0;
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        reverse(odd.begin(), odd.end());

        for(int i = 0; i < nums.size(); i++)
        {
            if(i % 2 == 0)
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