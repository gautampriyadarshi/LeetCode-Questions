class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) 
    {
        if(nums.size() == 1)
            return 1;

        vector<int> help;
        help.push_back(nums[0]);
        int count = 1, maxCount = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > nums[i-1])
            {
                help.push_back(nums[i]);
                count++;
            }
            else
            {
                count = 1;
                help.clear();
                help.push_back(nums[i]);
            }
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};