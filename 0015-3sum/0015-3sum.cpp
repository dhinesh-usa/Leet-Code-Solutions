class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        
        int sum = 0;
        vector<int> single;
        unordered_map<int,int> mp;
        set<vector<int>> temp;

        int target = 0;

        for(int i = 0; i < nums.size(); i ++)
        {
            target = target - nums[i];
            
            for(int j = i+1;j<nums.size();j++)
            {
                sum = target - nums[j];

                if(mp.find(sum)!=mp.end())
                {
                    single.push_back(nums[i]);
                    single.push_back(nums[mp[sum]]);
                    single.push_back(nums[j]);
                    sort(single.begin(),single.end());
                    temp.insert(single);
                    single.clear();
                }
                mp[nums[j]]=j;
            }
            single.clear();
            mp.clear();
            target = 0;
        }
        vector<vector<int>> ans(temp.begin(),temp.end());
        return ans;
    }
};