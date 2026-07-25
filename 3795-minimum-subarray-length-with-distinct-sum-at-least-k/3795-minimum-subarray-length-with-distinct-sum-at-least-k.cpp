class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        

        int left = 0;

        int right = 0;

        unordered_map<int,int> mp;

        int mincount = INT_MAX;

        int n = nums.size();

        int sum = 0;

        while(right < n)
        {

            if(mp[nums[right]] == 0)
            {
                sum += nums[right];
            }

            mp[nums[right]] ++;

            while(sum >= k)
            {
                mincount = min(mincount , right - left + 1);

                mp[nums[left]] --;

                if(mp[nums[left]] == 0)
                {
                   sum -= nums[left];
                }

                left ++;
            }

            right ++;
        }

        if(mincount == INT_MAX)
        {
            return -1;
        }

        return mincount;
    }
};