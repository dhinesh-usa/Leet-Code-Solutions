class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();

        int write = 0;

        unordered_map<int,int> mp;

        for(int read = 0; read < n ; read ++)
        {
            mp[nums[read]]++;

            if(mp[nums[read]] <= 2)
            {
                nums[write] = nums[read];

                write ++;
            }
        }

        return write;
    }
};