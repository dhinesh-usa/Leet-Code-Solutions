class Solution {
public:
    bool check(vector<int>& nums) {
        
        vector<int> arr;

        for(int i : nums)
        {
            arr.push_back(i);
        }

        sort(arr.begin() , arr.end());

        bool check = false;

        int n = nums.size();

        vector<int> temp(n);

       for(int i = 0; i < n; i ++)
       {
            if(arr == nums)
            {
                check = true;
                break;
            }
            for(int j = 0; j < n; j ++)

                temp[j] = arr[(j + 1) % n];
            
            arr = temp;

       }

       return check;


    }
};