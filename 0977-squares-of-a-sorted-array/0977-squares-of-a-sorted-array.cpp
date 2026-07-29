class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        

        int left = 0;

        int right = nums.size() - 1;

        vector<int> arr(nums.size());

        int k = right;

        for(int i = 0 ; i <= right; i ++)
        {
            nums[i] = nums[i] * nums[i];
        }

        while(left <= right and k >= 0)
        {
            if(nums[left] > nums[right])
            {
                arr[k] = nums[left];
                left ++;
            }
            else
            {
                arr[k] = nums[right];

                right --;
            }
            k --;
        }

        return arr;
    }
};