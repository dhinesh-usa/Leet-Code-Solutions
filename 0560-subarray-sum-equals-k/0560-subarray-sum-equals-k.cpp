class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        int arr[n];

        arr[0] = nums[0];

        int count = 0;

        for(int i = 1 ; i < n ; i ++)
        {
            arr[i] = arr[i - 1] + nums[i];
        }

        if(arr[0] == k)
        {
            count ++;
        }

        for(int j = 1; j < n; j ++)
        {
            
            if(arr[j] == k)
            {
                count ++;
            }

            for(int i = 0; i < j; i ++)
            {
                if(arr[j] - arr[i] == k)
                {
                    count ++;
                }
            }

        }

        return count;
    }
};