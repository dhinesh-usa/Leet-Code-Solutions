class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int maxlen = 0;

        int temp = 0;

        for(int i = 0 ; i < nums.size() ; i ++)
        {
            if(i > 0 and nums[i] == 1 and nums[i - 1] == 1)
            {
                temp ++;
            }
            else if(nums[i] == 1)
            {
                temp = 1;
            }
            else
            {
                maxlen = max(temp , maxlen);
                temp = 0;
            }

            maxlen = max(temp , maxlen);
        }

        return maxlen;
        
    }
};