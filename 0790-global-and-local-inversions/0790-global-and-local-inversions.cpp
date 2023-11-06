class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) 
    {
        // int global = 0, local = 0;
        // for(int i = 0; i < nums.size()-1; i++)
        // {
        //     for(int j = i+1; j < nums.size(); j++)
        //     {
        //         if(nums[i] > nums[j])
        //         {
        //             global++;
                    
        //             if(j == i+1)
        //                 local++;
        //         }
                    
        //     }
        // }
        // if(local == global)
        //     return true;
        
        // return false;

        int maxNum = 0;
        int n = nums.size();
        for(int i=0; i<n-2; ++i)
        {
            maxNum = max(maxNum, nums[i]);
            // we keep track of max number we found so far
            // because it can generate global inversion with smaller element
            if(maxNum > nums[i+2])
                return false;
        }
        return true;
    }
};