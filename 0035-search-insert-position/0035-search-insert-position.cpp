class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        

        int less = -1;

        for(int i = 0 ; i < nums.size() ; i ++)
        {
            if(nums[i] == target)
            {
                return i;
            }
            if(nums[i] <= target)
            {
                less = i;
            }
        }

        return less + 1;
    }
};