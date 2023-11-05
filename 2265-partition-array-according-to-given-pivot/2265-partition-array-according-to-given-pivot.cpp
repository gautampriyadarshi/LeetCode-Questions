class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) 
    {
        vector<int> left;
        vector<int> right;
        vector<int> ans;
        int countPivot = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < pivot)
                left.push_back(nums[i]);
            else if(nums[i] > pivot)
                right.push_back(nums[i]);
            
            if(nums[i] == pivot)
                countPivot++;
        }

        int m = left.size();
        int j = 0, k = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(j < m)
            {
                ans.push_back(left[j]);
                j++;
            }
            else if(j >= m && countPivot > 0)
            {
                ans.push_back(pivot);
                countPivot--;
            }
            else
            {
                ans.push_back(right[k]);
                k++;
            }
        }

        left.clear();
        right.clear();
        return ans;
    }
};