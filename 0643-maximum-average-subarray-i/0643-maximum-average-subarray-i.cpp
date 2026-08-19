class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int right = 0, left = 0;

        double maximum = INT_MIN;

        double sum = 0;

        while(right < nums.size())
        {

            sum += nums[right];

            if((right - left + 1) == k)
            {
                
                maximum = max(sum/k , maximum);

                sum = sum - nums[left];

                left ++;
            }

            right ++;
        }

        return maximum;
    }
};