class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int len1=nums1.size();
        int len2=nums2.size();

        int i=0;
        int j=0;
        vector<int> arr;

        while(i<len1 && j<len2)
        {
            if(nums1[i]<nums2[j])
            {
                arr.push_back(nums1[i]);
                i++;
            }
            else
            {
                arr.push_back(nums2[j]);
                j++;
            }
        }

        if(i<len1)
        {
            for(int n=i;n<len1;n++)
            {
                arr.push_back(nums1[n]);
            }
        }
        else
        {
            for(int n=j;n<len2;n++)
            {
                arr.push_back(nums2[n]);
            }
        }

        // for(int i:arr)
        // {
        //     cout << i << " ";
        // }

        int k=arr.size();

        int centre=k/2;

        double median;

        if(k%2==0)
        {
            median=(arr[centre]+arr[centre-1])/2.0;
        }
        else
        {
            median=arr[centre];
        }

        return median;
        
    }
};