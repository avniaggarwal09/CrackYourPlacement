class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1; 
        int j = n - 1;
        int mergeIndex = m + n - 1;

        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[mergeIndex] = nums1[i];
                i--;
            } 
            else {
                nums1[mergeIndex] = nums2[j];
                j--;
            }
            mergeIndex--;
        }
    }
};