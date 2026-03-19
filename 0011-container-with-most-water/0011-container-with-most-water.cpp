class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int left=0;
        int right=height.size()-1;

        int max=0;
        int find=0;

        while(left<right)
        {
            find=(right-left)*min(height[left],height[right]);
            if(max<find)
            {
                max=find;
            }

            if(height[left]<height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return max;

    }
};