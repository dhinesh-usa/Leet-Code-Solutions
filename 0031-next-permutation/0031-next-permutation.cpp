class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        for(int i = nums.size()-1;i >= 0; i --)
        {       
            int j = i;
            int temp = INT_MAX;
            int index = 0;
            if(i > 0 && nums[i] > nums[i-1])
            { 
                while(j < nums.size())
                {
                    if(nums[i-1] < nums[j])
                    {
                        if(nums[j]<=temp)
                        {
                            temp = nums[j];
                            index = j;
                        }
                    }
                    j++;
                    
                }  
            }
            if(j == nums.size())
            {
                swap(nums[i-1],nums[index]);

                reverse(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};