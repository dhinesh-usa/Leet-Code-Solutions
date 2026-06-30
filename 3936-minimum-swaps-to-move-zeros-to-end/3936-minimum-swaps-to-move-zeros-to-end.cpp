class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        
        int i = 0;

        int j = nums.size() - 1;
         
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[j] == 0)
            {
                j--;
            }
        }


        int count = 0;

        while(i < j)
        {
            if(nums[i] == 0)
            {
                swap(nums[i] , nums[j]);
                i++;
                j --;
                count ++;

                for(int i = 0; i < nums.size() - 1; i++)
                {
                    if(nums[j] == 0)
                    {
                        j--;
                    }
                }
                
            }
            else
                i++;
        }

        cout << i;
        cout << j;

        return count;
    }
};