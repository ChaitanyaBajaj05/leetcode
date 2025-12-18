/*
    Merge Sorted Array
    LeetCode Problem 88
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;            // Pointer for nums1 (valid elements)
        int j = n - 1;            // Pointer for nums2
        int k = m + n - 1;        // Pointer for placement in nums1

        // Merge in reverse order
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If any elements left in nums2, copy them
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

        // No need to handle nums1 leftovers; already in place
    }
};
