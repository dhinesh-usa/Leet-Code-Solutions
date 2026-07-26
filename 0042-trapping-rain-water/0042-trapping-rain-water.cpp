class Solution {
public:
    int trap(vector<int>& height) {

        int water = 0;

        int n = height.size();

        int leftmax = INT_MIN;

        int rightmax = INT_MIN;

        int left[n];

        int right[n];

        for(int l = 0 ; l < n ; l ++)
        {
            leftmax = max(leftmax , height[l]);

            left[l] = leftmax;
        }
      
        for(int r = n - 1 ; r >= 0; r --)
        {
            rightmax = max(rightmax , height[r]);

            right[r] = rightmax;
        }

        for(int i = 0 ; i < height.size() ; i ++)
        {
            leftmax = left[i];

            rightmax = right[i];

            water += min(leftmax , rightmax) - height[i];
        }


        return water;
    }
};