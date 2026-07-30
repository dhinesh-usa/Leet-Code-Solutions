class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxi = INT_MIN;

        int left = 0;

        int right = height.size() - 1;

        while(left < right)
        {
            int temp = min(height[left] , height[right]) * (right - left);

            maxi = max(temp , maxi);

            if(height[left] < height[right])
            {
                left ++;
            }
            else if( height[left] == height[right])
            {
                left ++;
                right --;
            }
            else
            {
                right --;
            }
        }

        return maxi;
        
    }
};