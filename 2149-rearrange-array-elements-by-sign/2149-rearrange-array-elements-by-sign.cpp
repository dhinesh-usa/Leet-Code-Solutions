class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int pos = 0 , neg = 1;

        int n = nums.size();

        vector<int> ans(n);

        for(int i = 0 ; i < n ; i ++)
        {
            if(nums[i] > 0 and pos < n)
            {
                ans[pos] = nums[i];

                pos += 2;
            }
            else if(neg < n and nums[i] < 0)
            {
                ans[neg] = nums[i];
                neg += 2;
            }
        }

        for(int i = 0; i < n ; i ++)
        {
            nums[i] = ans[i];
        }

        return nums;
    }
};