class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int count = 0;
        if(nums[0] == 1)
            count++;
        
        int maxCount = count;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == 1)
                count++;
                
            else if(nums[i] == 0)
                count = 0;
            
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};